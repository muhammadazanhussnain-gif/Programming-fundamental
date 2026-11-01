using System;

namespace EcommerceStore
{
    public class ProductModel
    {
        private string name;
        private string description;
        private float price;
        private int stock;

        public ProductModel()
        {
        }

        public ProductModel(string name, string description, float price, int stock)
        {
            this.name = name;
            this.description = description;
            this.price = price;
            this.stock = stock;
        }

        public void SetName(string name)
        {
            this.name = name;
        }

        public string GetName()
        {
            return this.name;
        }

        public void SetDescription(string description)
        {
            this.description = description;
        }

        public string GetDescription()
        {
            return this.description;
        }

        public void SetPrice(float price)
        {
            this.price = price;
        }

        public float GetPrice()
        {
            return this.price;
        }

        public void SetStock(int stock)
        {
            this.stock = stock;
        }

        public int GetStock()
        {
            return this.stock;
        }

        public override string ToString()
        {
            return $"{name},{description},{price},{stock}";
        }
    }
}