using System;
using System.Collections.Generic;

namespace EcommerceStore
{
    public class OrderService
    {
        private OrderRepo repo = new OrderRepo();
        private CustomerService customerService = new CustomerService();
        private ProductService productService = new ProductService();

        public string PlaceOrder(string customerPhone, string productName, int quantity)
        {
            if (quantity <= 0)
            {
                return "Quantity must be greater than 0.";
            }

            CustomerModel foundCustomer = null;
            foreach (CustomerModel customer in customerService.GetAllCustomers())
            {
                if (customer.GetPhone() == customerPhone)
                {
                    foundCustomer = customer;
                }
            }

            if (foundCustomer == null)
            {
                return "Customer not found.";
            }

            ProductModel foundProduct = null;
            foreach (ProductModel product in productService.GetAllProducts())
            {
                if (product.GetName() == productName)
                {
                    foundProduct = product;
                }
            }

            if (foundProduct == null)
            {
                return "Product not found.";
            }

            if (foundProduct.GetStock() < quantity)
            {
                return "Not enough stock.";
            }

            float total = foundProduct.GetPrice() * quantity;

            List<OrderModel> orderList = repo.GetOrdersFromFile();
            int newId = 1;
            if (orderList.Count > 0)
            {
                newId = orderList[orderList.Count - 1].GetId() + 1;
            }

            OrderModel order = new OrderModel(newId, foundCustomer.GetName(), foundCustomer.GetPhone(), foundProduct.GetName(), quantity, total);
            repo.SaveInFile(order);

            int newStock = foundProduct.GetStock() - quantity;
            productService.UpdateProduct(foundProduct.GetName(), foundProduct.GetPrice(), newStock);

            return "Order placed. Order ID: " + newId + "\nTotal bill: " + total + "\nThank You for Purchasing!!";
        }

        public string CancelOrder(int id)
        {
            List<OrderModel> orderList = repo.GetOrdersFromFile();

            foreach (OrderModel order in orderList)
            {
                if (order.GetId() == id)
                {
                    foreach (ProductModel product in productService.GetAllProducts())
                    {
                        if (product.GetName() == order.GetProductName())
                        {
                            int newStock = product.GetStock() + order.GetQuantity();
                            productService.UpdateProduct(product.GetName(), product.GetPrice(), newStock);
                        }
                    }

                    orderList.Remove(order);
                    repo.SaveAllInFile(orderList);
                    return "Order cancelled.";
                }
            }

            return "Order not found.";
        }

        public List<OrderModel> GetAllOrders()
        {
            return repo.GetOrdersFromFile();
        }
    }
}