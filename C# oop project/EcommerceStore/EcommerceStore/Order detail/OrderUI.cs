using System;

namespace EcommerceStore
{
    public class orderUI
    {
        public string orderMenu()
        {
            Console.WriteLine("========================");
            Console.WriteLine("   |ORDER MANAGEMENT|   ");
            Console.WriteLine("========================");
            Console.WriteLine("1  PLACE ORDER");
            Console.WriteLine("2  CANCEL ORDER");
            Console.WriteLine("3  VIEW ALL");
            Console.WriteLine("4  BACK");
            string option = Console.ReadLine();
            return option;
        }
    }
}