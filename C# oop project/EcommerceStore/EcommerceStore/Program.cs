using System;
using System.Collections.Generic;

namespace EcommerceStore
{
    internal class Program
    {
        static mainMenuUI mainScreen = new mainMenuUI();

        static customerUI customerScreen = new customerUI();
        static CustomerService customerService = new CustomerService();

        static productUI productScreen = new productUI();
        static ProductService productService = new ProductService();

        static orderUI orderScreen = new orderUI();
        static OrderService orderService = new OrderService();

        static void Main(string[] args)
        {
            while (true)
            {
                string option = mainScreen.mainMenu();

                if (option == "1")
                {
                    CustomerSection();
                }
                else if (option == "2")
                {
                    ProductSection();
                }
                else if (option == "3")
                {
                    OrderSection();
                }
                else if (option == "4")
                {
                    break;
                }
                else
                {
                    Console.WriteLine("Invalid option.");
                }

                Console.WriteLine();
            }
        }

        static void CustomerSection()
        {
            while (true)
            {
                string option = customerScreen.customerMenu();

                if (option == "1")
                {
                    Console.Write("Name: ");
                    string name = Console.ReadLine();

                    Console.Write("Phone: ");
                    string phone = Console.ReadLine();

                    Console.WriteLine(customerService.AddCustomer(name, phone));
                }
                else if (option == "2")
                {
                    Console.Write("Customer phone: ");
                    string phone = Console.ReadLine();

                    Console.Write("New name: ");
                    string newName = Console.ReadLine();

                    Console.WriteLine(customerService.UpdateCustomer(phone, newName));
                }
                else if (option == "3")
                {
                    Console.Write("Customer phone: ");
                    string phone = Console.ReadLine();

                    Console.WriteLine(customerService.DeleteCustomer(phone));
                }
                else if (option == "4")
                {
                    List<CustomerModel> list = customerService.GetAllCustomers();

                    foreach (CustomerModel customer in list)
                    {
                        Console.WriteLine("Customer Name: "+customer.GetName() + "\n" + "Customer Phone: "+ customer.GetPhone());
                    }
                    Console.WriteLine("-------------------------");
                }
                else if (option == "5")
                {
                    break;
                }
                else
                {
                    Console.WriteLine("Invalid option.");
                }

                Console.WriteLine();
            }
        }

        static void ProductSection()
        {
            while (true)
            {
                string option = productScreen.productMenu();

                if (option == "1")
                {
                    Console.Write("Name: ");
                    string name = Console.ReadLine();

                    Console.Write("Description: ");
                    string description = Console.ReadLine();

                    Console.Write("Price: ");
                    float price = float.Parse(Console.ReadLine());

                    Console.Write("Stock: ");
                    int stock = int.Parse(Console.ReadLine());

                    Console.WriteLine(productService.AddProduct(name, description, price, stock));
                }
                else if (option == "2")
                {
                    Console.Write("Product name: ");
                    string name = Console.ReadLine();

                    Console.Write("New price: ");
                    float newPrice = float.Parse(Console.ReadLine());

                    Console.Write("New stock: ");
                    int newStock = int.Parse(Console.ReadLine());

                    Console.WriteLine(productService.UpdateProduct(name, newPrice, newStock));
                }
                else if (option == "3")
                {
                    Console.Write("Product name: ");
                    string name = Console.ReadLine();

                    Console.WriteLine(productService.DeleteProduct(name));
                }
                else if (option == "4")
                {
                    List<ProductModel> list = productService.GetAllProducts();

                    foreach (ProductModel product in list)
                    {
                        Console.WriteLine("Product Name: "+ product.GetName() + "\n" +"Details: "+ product.GetDescription() + "\n" +"Prodct Price: "+ product.GetPrice() + "\n" +"Stock: "+ product.GetStock());
                    }
                    Console.WriteLine("-------------------");
                }
                else if (option == "5")
                {
                    break;
                }
                else
                {
                    Console.WriteLine("Invalid option.");
                }

                Console.WriteLine();
            }
        }

        static void OrderSection()
        {
            while (true)
            {
                string option = orderScreen.orderMenu();

                if (option == "1")
                {
                    Console.Write("Customer phone: ");
                    string phone = Console.ReadLine();

                    Console.Write("Product name: ");
                    string productName = Console.ReadLine();

                    Console.Write("Quantity: ");
                    int quantity = int.Parse(Console.ReadLine());

                    Console.WriteLine(orderService.PlaceOrder(phone, productName, quantity));
                }
                else if (option == "2")
                {
                    Console.Write("Order ID: ");
                    int id = int.Parse(Console.ReadLine());

                    Console.WriteLine(orderService.CancelOrder(id));
                }
                else if (option == "3")
                {
                    List<OrderModel> list = orderService.GetAllOrders();

                    foreach (OrderModel order in list)
                    {
                        Console.WriteLine("Order ID: "+ order.GetId() + "\n " + "Customer Name: "+order.GetCustomerName() + "\n " +"Phone no: " +order.GetCustomerPhone() + "\n " +"Product name: "+ order.GetProductName() + "\n " + "Quantity: "+order.GetQuantity() + "\n " +"Total: "+ order.GetTotal());
                    }
                    Console.WriteLine("-------------------");
                }
                else if (option == "4")
                {
                    break;
                }
                else
                {
                    Console.WriteLine("Invalid option.");
                }

                Console.WriteLine();
            }
        }
    }
}