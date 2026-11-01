using System;
using System.Collections.Generic;

namespace EcommerceStore
{
    public class ProductService
    {
        private ProductRepo repo = new ProductRepo();

        public string AddProduct(string name, string description, float price, int stock)
        {
            if (name == "")
            {
                return "Name is required.";
            }

            if (price <= 0)
            {
                return "Price must be greater than 0.";
            }

            if (stock < 0)
            {
                return "Stock cannot be negative.";
            }

            List<ProductModel> productList = repo.GetProductsFromFile();

            foreach (ProductModel product in productList)
            {
                if (product.GetName() == name)
                {
                    return "Product already exists.";
                }
            }

            ProductModel newProduct = new ProductModel(name, description, price, stock);
            repo.SaveInFile(newProduct);
            return "Product added.";
        }

        public string UpdateProduct(string name, float newPrice, int newStock)
        {
            if (newPrice <= 0)
            {
                return "Price must be greater than 0.";
            }

            if (newStock < 0)
            {
                return "Stock cannot be negative.";
            }

            List<ProductModel> productList = repo.GetProductsFromFile();

            foreach (ProductModel product in productList)
            {
                if (product.GetName() == name)
                {
                    product.SetPrice(newPrice);
                    product.SetStock(newStock);
                    repo.SaveAllInFile(productList);
                    return "Product updated.";
                }
            }

            return "Product not found.";
        }

        public string DeleteProduct(string name)
        {
            List<ProductModel> productList = repo.GetProductsFromFile();

            foreach (ProductModel product in productList)
            {
                if (product.GetName() == name)
                {
                    productList.Remove(product);
                    repo.SaveAllInFile(productList);
                    return "Product deleted.";
                }
            }

            return "Product not found.";
        }

        public List<ProductModel> GetAllProducts()
        {
            return repo.GetProductsFromFile();
        }
    }
}