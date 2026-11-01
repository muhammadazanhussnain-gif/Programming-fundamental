using System;

namespace EcommerceStore
{
    public class CustomerModel
    {
        private string name;
        private string phone;

        public CustomerModel()
        {
        }

        public CustomerModel(string name, string phone)
        {
            this.name = name;
            this.phone = phone;
        }

        public void SetName(string name)
        {
            this.name = name;
        }

        public string GetName()
        {
            return this.name;
        }

        public void SetPhone(string phone)
        {
            this.phone = phone;
        }

        public string GetPhone()
        {
            return this.phone;
        }

        public override string ToString()
        {
            return $"{name},{phone}";
        }
    }
}