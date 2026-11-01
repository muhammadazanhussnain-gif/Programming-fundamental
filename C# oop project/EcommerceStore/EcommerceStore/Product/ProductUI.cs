using System;

namespace EcommerceStore
{
    public class productUI
    {
        public string productMenu()
        {
            Console.WriteLine("===========================");
            Console.WriteLine("   |PRODUCT MANAGEMENT| ");
            Console.WriteLine("===========================");
            Console.WriteLine("1  ADD");
            Console.WriteLine("2  UPDATE");
            Console.WriteLine("3  DELETE");
            Console.WriteLine("4  VIEW ALL");
            Console.WriteLine("5  BACK");
            string option = Console.ReadLine();
            return option;
        }
    }
}