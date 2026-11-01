using System;
using System.Collections.Generic;
using System.IO;

namespace EcommerceStore
{
    public class ProductRepo
    {
        private string file = "products.txt";

        public void SaveInFile(ProductModel product)
        {
            using (StreamWriter stream = new StreamWriter(file, true))
            {
                stream.WriteLine(product.ToString());
            }
        }

        public void SaveAllInFile(List<ProductModel> productList)
        {
            using (StreamWriter stream = new StreamWriter(file, false))
            {
                foreach (ProductModel product in productList)
                {
                    stream.WriteLine(product.ToString());
                }
            }
        }

        public List<ProductModel> GetProductsFromFile()
        {
            List<ProductModel> productList = new List<ProductModel>();

            if (!File.Exists(file))
            {
                return productList;
            }

            using (StreamReader stream = new StreamReader(file))
            {
                string line = "";
                while ((line = stream.ReadLine()) != null)
                {
                    if (line == "")
                    {
                        continue;
                    }

                    List<string> parts = new List<string>(line.Split(','));
                    string name = parts[0];
                    string description = parts[1];
                    float price = float.Parse(parts[2]);
                    int stock = int.Parse(parts[3]);

                    ProductModel product = new ProductModel(name, description, price, stock);
                    productList.Add(product);
                }
            }
            return productList;
        }
    }
}