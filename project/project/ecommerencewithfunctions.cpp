#include <iostream>
#include <conio.h>
using namespace std;

// ===== FUNCTION 1: VIEW PRODUCTS =====
void viewProducts(string pnames[], double prices[], int stock[], int totalProducts)
{
    system("cls");
    cout << "ID\tName\t\tPrice\tStock" << endl;
    for (int i = 0; i < totalProducts; i++)
    {
        cout << i + 1 << "\t" << pnames[i] << "\t$" << prices[i] << "\t" << stock[i] << endl;
    }
}

// ===== FUNCTION 2: ADD PRODUCT =====
int addProduct(string pnames[], double prices[], int stock[], int totalProducts)
{
    if (totalProducts < 50)
    {
        system("cls");
        cout << "--- ADD PRODUCT ---" << endl;
        cout << "Product Name: ";
        cin >> pnames[totalProducts];
        cout << "Price: ";
        cin >> prices[totalProducts];
        cout << "Stock: ";
        cin >> stock[totalProducts];
        totalProducts++;
        cout << "Product Added!" << endl;
    }
    else
    {
        cout << "Product limit reached!" << endl;
    }
    return totalProducts;
}

// ===== FUNCTION 3: DELETE PRODUCT =====
int deleteProduct(string pnames[], double prices[], int stock[], int totalProducts)
{
    system("cls");
    cout << "Enter Product ID to delete: ";
    int pid;
    cin >> pid;

    if (pid >= 1 && pid <= totalProducts)
    {
        for (int i = pid - 1; i < totalProducts - 1; i++)
        {
            pnames[i] = pnames[i + 1];
            prices[i] = prices[i + 1];
            stock[i] = stock[i + 1];
        }
        totalProducts--;
        cout << "Product Deleted!" << endl;
    }
    else
    {
        cout << "Invalid ID!" << endl;
    }
    return totalProducts;
}

// ===== FUNCTION 4: VIEW CUSTOMERS =====
void viewCustomers(string usernames[], double balances[], int totalCustomers)
{
    system("cls");
    cout << "ID\tUsername\tBalance" << endl;
    for (int i = 0; i < totalCustomers; i++)
    {
        cout << i + 1 << "\t" << usernames[i] << "\t\t$" << balances[i] << endl;
    }
}

// ===== FUNCTION 5: VIEW ORDERS =====
void viewOrders(string usernames[], string pnames[], int orderCust[], int orderProd[], int orderQty[], double orderTotal[], int totalOrders, double totalRevenue)
{
    system("cls");
    if (totalOrders == 0)
    {
        cout << "No orders yet." << endl;
    }
    else
    {
        cout << "ID\tCustomer\tProduct\t\tQty\tTotal" << endl;
        for (int i = 0; i < totalOrders; i++)
        {
            cout << i + 1 << "\t"
                 << usernames[orderCust[i]] << "\t\t"
                 << pnames[orderProd[i]] << "\t\t"
                 << orderQty[i] << "\t$"
                 << orderTotal[i] << endl;
        }
        cout << "Total Revenue: $" << totalRevenue << endl;
    }
}

// ===== FUNCTION 6: ADD TO CART =====
int addToCart(string pnames[], double prices[], int stock[], int totalProducts, int cartProd[], int cartQty[], int cartCount)
{
    system("cls");
    cout << "Enter Product ID: ";
    int pid;
    cin >> pid;
    cout << "Enter Quantity: ";
    int qty;
    cin >> qty;

    if (pid >= 1 && pid <= totalProducts)
    {
        int pi = pid - 1;
        if (qty > 0 && qty <= stock[pi])
        {
            bool found = false;
            for (int i = 0; i < cartCount; i++)
            {
                if (cartProd[i] == pi)
                {
                    cartQty[i] += qty;
                    found = true;
                    break;
                }
            }
            if (found == false)
            {
                cartProd[cartCount] = pi;
                cartQty[cartCount] = qty;
                cartCount++;
            }
            cout << "Added to cart!" << endl;
        }
        else
        {
            cout << "Invalid quantity or not enough stock!" << endl;
        }
    }
    else
    {
        cout << "Invalid Product ID!" << endl;
    }
    return cartCount;
}

// ===== FUNCTION 7: VIEW CART =====
void viewCart(string pnames[], double prices[], int cartProd[], int cartQty[], int cartCount)
{
    system("cls");
    if (cartCount == 0)
    {
        cout << "Cart is empty!" << endl;
    }
    else
    {
        double total = 0;
        cout << "ID\tName\t\tQty\tSubtotal" << endl;
        for (int i = 0; i < cartCount; i++)
        {
            int pi = cartProd[i];
            double sub = prices[pi] * cartQty[i];
            total += sub;
            cout << pi + 1 << "\t" << pnames[pi] << "\t" << cartQty[i] << "\t$" << sub << endl;
        }
        cout << "Total: $" << total << endl;
    }
}

// ===== FUNCTION 8: CHECKOUT =====
void checkout(double balances[], int stock[], double prices[], int cartProd[], int cartQty[], int cartCount, int cindex, int orderCust[], int orderProd[], int orderQty[], double orderTotal[], int &totalOrders, double &totalRevenue)
{
    system("cls");
    if (cartCount == 0)
    {
        cout << "Cart is empty!" << endl;
    }
    else
    {
        double total = 0;
        for (int i = 0; i < cartCount; i++)
        {
            total += prices[cartProd[i]] * cartQty[i];
        }

        cout << "Total: $" << total << " | Your Balance: $" << balances[cindex] << endl;

        if (balances[cindex] >= total)
        {
            cout << "Confirm? (y/n): ";
            char c;
            cin >> c;

            if (c == 'y' || c == 'Y')
            {
                balances[cindex] -= total;
                totalRevenue += total;

                for (int i = 0; i < cartCount; i++)
                {
                    int pi = cartProd[i];
                    stock[pi] -= cartQty[i];
                    orderCust[totalOrders] = cindex;
                    orderProd[totalOrders] = pi;
                    orderQty[totalOrders] = cartQty[i];
                    orderTotal[totalOrders] = prices[pi] * cartQty[i];
                    totalOrders++;
                }
                cartCount = 0;
                cout << "Purchase done! Remaining Balance: $" << balances[cindex] << endl;
            }
            else
            {
                cout << "Cancelled." << endl;
            }
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }
}

// ===== FUNCTION 9: MY ORDERS =====
void myOrders(string pnames[], int orderCust[], int orderProd[], int orderQty[], double orderTotal[], int totalOrders, int cindex)
{
    system("cls");
    bool hasOrders = false;
    for (int i = 0; i < totalOrders; i++)
    {
        if (orderCust[i] == cindex)
        {
            if (hasOrders == false)
            {
                cout << "ID\tProduct\t\tQty\tTotal" << endl;
                hasOrders = true;
            }
            cout << i + 1 << "\t" << pnames[orderProd[i]] << "\t\t" << orderQty[i] << "\t$" << orderTotal[i] << endl;
        }
    }
    if (hasOrders == false)
    {
        cout << "No orders found!" << endl;
    }
}

// ===== FUNCTION 10: ADD BALANCE =====
void addBalance(double balances[], int cindex)
{
    system("cls");
    cout << "Current Balance: $" << balances[cindex] << endl;
    cout << "Enter amount: $";
    double amt;
    cin >> amt;

    if (amt > 0)
    {
        balances[cindex] += amt;
        cout << "New Balance: $" << balances[cindex] << endl;
    }
    else
    {
        cout << "Invalid amount!" << endl;
    }
}

// ===== FUNCTION 11: REGISTER =====
int registerAccount(string usernames[], string passwords[], double balances[], int totalCustomers)
{
    system("cls");
    cout << "--- REGISTER ---" << endl;

    if (totalCustomers < 50)
    {
        cout << "Enter Username: ";
        string nu;
        cin >> nu;

        bool exists = false;
        for (int i = 0; i < totalCustomers; i++)
        {
            if (usernames[i] == nu)
            {
                exists = true;
                break;
            }
        }

        if (exists == false)
        {
            cout << "Enter Password: ";
            string np;
            cin >> np;
            cout << "Enter Balance: $";
            double nb;
            cin >> nb;

            usernames[totalCustomers] = nu;
            passwords[totalCustomers] = np;
            balances[totalCustomers] = nb;
            totalCustomers++;

            cout << "Account created! You can now login." << endl;
        }
        else
        {
            cout << "Username already exists!" << endl;
        }
    }
    else
    {
        cout << "Customer limit reached!" << endl;
    }
    return totalCustomers;
}

// ===== MAIN FUNCTION =====
main()
{
    // ===== DATA =====
    string pnames[50] = {"Laptop", "Samsung Phone", "Nike Shoes"};
    double prices[50] = {1299.99, 899.99, 129.99};
    int stock[50] = {10, 20, 40};
    int totalProducts = 3;

    string usernames[50] = {"john", "sara"};
    string passwords[50] = {"john123", "sara123"};
    double balances[50] = {5000.00, 3000.00};
    int totalCustomers = 2;

    int cartProd[50] = {-1};
    int cartQty[50] = {0};
    int cartCount = 0;

    int orderCust[50];
    int orderProd[50];
    int orderQty[50];
    double orderTotal[50];
    int totalOrders = 0;
    double totalRevenue = 0;

    while (true)
    {
        system("cls");
        cout << "|----------------------------------|" << endl;
        cout << "|    E-COMMERCE STORE SYSTEM       |" << endl;
        cout << "|----------------------------------|" << endl;
        cout << "1. Admin Login" << endl;
        cout << "2. Customer Login" << endl;
        cout << "3. Register" << endl;
        cout << "4. Exit" << endl;
        cout << "Choose Option: ";
        int option;
        cin >> option;

        // ===== ADMIN =====
        if (option == 1)
        {
            for (int attempt = 0; attempt < 3; attempt++)
            {
                system("cls");
                cout << "--- ADMIN LOGIN --- Attempt " << attempt + 1 << endl;
                cout << "Username: ";
                string u;
                cin >> u;
                cout << "Password: ";
                string p;
                cin >> p;

                if (u == "admin" && p == "admin123")
                {
                    cout << "Login Successful!" << endl;

                    while (true)
                    {
                        system("cls");
                        cout << "--- ADMIN MENU ---" << endl;
                        cout << "1. View Products" << endl;
                        cout << "2. Add Product" << endl;
                        cout << "3. Delete Product" << endl;
                        cout << "4. View Customers" << endl;
                        cout << "5. View Orders" << endl;
                        cout << "6. Logout" << endl;
                        cout << "Choose: ";
                        int ac;
                        cin >> ac;

                        if (ac == 1)
                        {
                            viewProducts(pnames, prices, stock, totalProducts);
                        }
                        else if (ac == 2)
                        {
                            totalProducts = addProduct(pnames, prices, stock, totalProducts);
                        }
                        else if (ac == 3)
                        {
                            totalProducts = deleteProduct(pnames, prices, stock, totalProducts);
                        }
                        else if (ac == 4)
                        {
                            viewCustomers(usernames, balances, totalCustomers);
                        }
                        else if (ac == 5)
                        {
                            viewOrders(usernames, pnames, orderCust, orderProd, orderQty, orderTotal, totalOrders, totalRevenue);
                        }
                        else if (ac == 6)
                        {
                            break;
                        }
                        else
                        {
                            cout << "Invalid option!" << endl;
                        }

                        cout << "\nPress any key to continue...";
                        getch();
                    }
                    break;
                }
                else
                {
                    cout << "Wrong username or password!" << endl;
                    cout << "Press any key to continue...";
                    getch();
                }
            }
        }

        // ===== CUSTOMER LOGIN =====
        else if (option == 2)
        {
            system("cls");
            cout << "--- CUSTOMER LOGIN ---" << endl;
            cout << "Username: ";
            string u;
            cin >> u;
            cout << "Password: ";
            string p;
            cin >> p;

            int cindex = -1;
            for (int i = 0; i < totalCustomers; i++)
            {
                if (usernames[i] == u && passwords[i] == p)
                {
                    cindex = i;
                    break;
                }
            }

            if (cindex != -1)
            {
                cartCount = 0;
                cout << "Welcome " << usernames[cindex] << "! Balance: $" << balances[cindex] << endl;

                while (true)
                {
                    system("cls");
                    cout << "--- CUSTOMER MENU --- Balance: $" << balances[cindex] << endl;
                    cout << "1. View Products" << endl;
                    cout << "2. Add to Cart" << endl;
                    cout << "3. View Cart" << endl;
                    cout << "4. Checkout" << endl;
                    cout << "5. My Orders" << endl;
                    cout << "6. Add Balance" << endl;
                    cout << "7. Logout" << endl;
                    cout << "Choose: ";
                    int cc;
                    cin >> cc;

                    if (cc == 1)
                    {
                        viewProducts(pnames, prices, stock, totalProducts);
                    }
                    else if (cc == 2)
                    {
                        cartCount = addToCart(pnames, prices, stock, totalProducts, cartProd, cartQty, cartCount);
                    }
                    else if (cc == 3)
                    {
                        viewCart(pnames, prices, cartProd, cartQty, cartCount);
                    }
                    else if (cc == 4)
                    {
                        checkout(balances, stock, prices, cartProd, cartQty, cartCount, cindex, orderCust, orderProd, orderQty, orderTotal, totalOrders, totalRevenue);
                        cartCount = 0;
                    }
                    else if (cc == 5)
                    {
                        myOrders(pnames, orderCust, orderProd, orderQty, orderTotal, totalOrders, cindex);
                    }
                    else if (cc == 6)
                    {
                        addBalance(balances, cindex);
                    }
                    else if (cc == 7)
                    {
                        break;
                    }
                    else
                    {
                        cout << "Invalid option!" << endl;
                    }

                    cout << "\nPress any key to continue...";
                    getch();
                }
            }
            else
            {
                cout << "Wrong username or password!" << endl;
            }
        }

        // ===== REGISTER =====
        else if (option == 3)
        {
            totalCustomers = registerAccount(usernames, passwords, balances, totalCustomers);
        }

        // ===== EXIT =====
        else if (option == 4)
        {
            cout << "Goodbye!" << endl;
            break;
        }
        else
        {
            cout << "Invalid option!" << endl;
        }

        cout << "\nPress any key to continue...";
        getch();
    }

    return 0;
}