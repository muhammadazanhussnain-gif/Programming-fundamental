using System;

namespace EcommerceStore
{
    public class mainMenuUI
    {
        public string mainMenu()
        {
            Console.WriteLine(" ===========================");
            Console.WriteLine("===== |ECOMMERCE STORE| =====");
            Console.WriteLine(" ===========================");
            Console.WriteLine("1. Customer Section");
            Console.WriteLine("2. Product Section");
            Console.WriteLine("3. Order Section");
            Console.WriteLine("4. Exit");

            Console.Write("Enter your choice: ");

            string option = Console.ReadLine();

            return option;
        }
    }
}