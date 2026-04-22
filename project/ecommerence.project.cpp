#include <iostream>
using namespace std;

int main()
{
    // ===================== SYSTEM VARIABLES =====================

    // Admin credentials (using fixed-size single arrays)
    char admin_username[20];
    char admin_password[20];

    // Initialize admin credentials manually
    admin_username[0] = 'a';
    admin_username[1] = 'd';
    admin_username[2] = 'm';
    admin_username[3] = 'i';
    admin_username[4] = 'n';
    admin_username[5] = '\0';
    admin_password[0] = 'a';
    admin_password[1] = 'd';
    admin_password[2] = 'm';
    admin_password[3] = 'i';
    admin_password[4] = 'n';
    admin_password[5] = '1';
    admin_password[6] = '2';
    admin_password[7] = '3';
    admin_password[8] = '\0';

    // Product catalog (max 50 products) - using 1D arrays with fixed width
    // Each product name takes 100 chars, so product_names[0-99] is product 0, [100-199] is product 1, etc.
    char product_names[5000];  // 50 products * 100 chars each
    double product_prices[50];
    int product_stock[50];
    char product_categories[1500];  // 50 products * 30 chars each
    int total_products = 5;

    // Initialize all to null
    for (int i = 0; i < 5000; i++) product_names[i] = '\0';
    for (int i = 0; i < 1500; i++) product_categories[i] = '\0';

    // Initialize sample products
    char temp1[] = "Laptop Dell XPS 13";
    for (int i = 0; temp1[i] != '\0'; i++) product_names[0 * 100 + i] = temp1[i];
    product_prices[0] = 1299.99;
    product_stock[0] = 15;
    char cat1[] = "Electronics";
    for (int i = 0; cat1[i] != '\0'; i++) product_categories[0 * 30 + i] = cat1[i];

    char temp2[] = "Samsung Galaxy S24";
    for (int i = 0; temp2[i] != '\0'; i++) product_names[1 * 100 + i] = temp2[i];
    product_prices[1] = 899.99;
    product_stock[1] = 25;
    for (int i = 0; cat1[i] != '\0'; i++) product_categories[1 * 30 + i] = cat1[i];

    char temp3[] = "Nike Air Max Shoes";
    for (int i = 0; temp3[i] != '\0'; i++) product_names[2 * 100 + i] = temp3[i];
    product_prices[2] = 129.99;
    product_stock[2] = 40;
    char cat2[] = "Fashion";
    for (int i = 0; cat2[i] != '\0'; i++) product_categories[2 * 30 + i] = cat2[i];

    char temp4[] = "Sony Headphones WH-1000XM5";
    for (int i = 0; temp4[i] != '\0'; i++) product_names[3 * 100 + i] = temp4[i];
    product_prices[3] = 349.99;
    product_stock[3] = 30;
    for (int i = 0; cat1[i] != '\0'; i++) product_categories[3 * 30 + i] = cat1[i];

    char temp5[] = "Adidas Sports T-Shirt";
    for (int i = 0; temp5[i] != '\0'; i++) product_names[4 * 100 + i] = temp5[i];
    product_prices[4] = 39.99;
    product_stock[4] = 100;
    for (int i = 0; cat2[i] != '\0'; i++) product_categories[4 * 30 + i] = cat2[i];

    // Customer accounts (max 20 customers) - using 1D arrays
    char customer_usernames[600];   // 20 customers * 30 chars each
    char customer_passwords[600];   // 20 customers * 30 chars each
    char customer_emails[1000];     // 20 customers * 50 chars each
    double customer_balances[20];
    int total_customers = 2;

    // Initialize all to null
    for (int i = 0; i < 600; i++)
    {
        customer_usernames[i] = '\0';
        customer_passwords[i] = '\0';
    }
    for (int i = 0; i < 1000; i++) customer_emails[i] = '\0';

    // Initialize sample customers
    char cuser1[] = "john";
    for (int i = 0; cuser1[i] != '\0'; i++) customer_usernames[0 * 30 + i] = cuser1[i];
    char cpass1[] = "john123";
    for (int i = 0; cpass1[i] != '\0'; i++) customer_passwords[0 * 30 + i] = cpass1[i];
    char cemail1[] = "john@email.com";
    for (int i = 0; cemail1[i] != '\0'; i++) customer_emails[0 * 50 + i] = cemail1[i];
    customer_balances[0] = 5000.00;

    char cuser2[] = "sarah";
    for (int i = 0; cuser2[i] != '\0'; i++) customer_usernames[1 * 30 + i] = cuser2[i];
    char cpass2[] = "sarah123";
    for (int i = 0; cpass2[i] != '\0'; i++) customer_passwords[1 * 30 + i] = cpass2[i];
    char cemail2[] = "sarah@email.com";
    for (int i = 0; cemail2[i] != '\0'; i++) customer_emails[1 * 50 + i] = cemail2[i];
    customer_balances[1] = 3000.00;

    // Cart system (flat arrays)
    int cart_product_ids[400];      // 20 customers * 20 items
    int cart_quantities[400];
    int cart_item_counts[20];

    // Initialize empty carts
    for (int i = 0; i < 20; i++)
    {
        cart_item_counts[i] = 0;
        for (int j = 0; j < 20; j++)
        {
            cart_product_ids[i * 20 + j] = -1;
            cart_quantities[i * 20 + j] = 0;
        }
    }

    // Order history (max 100 orders) - using 1D arrays
    char order_customer_names[3000];  // 100 orders * 30 chars each
    char order_product_names[10000];  // 100 orders * 100 chars each
    int order_quantities[100];
    double order_totals[100];
    int total_orders = 0;

    // Initialize to null
    for (int i = 0; i < 3000; i++) order_customer_names[i] = '\0';
    for (int i = 0; i < 10000; i++) order_product_names[i] = '\0';

    // System statistics
    double total_revenue = 0.0;

    // Session variables
    bool system_running = true;

    // Temporary input buffers
    char input_buffer[100];
    char temp_buffer[100];

    // ===================== MAIN PROGRAM LOOP =====================

    while (system_running)
    {

        // ============= MAIN MENU =============
        cout << "\n";
        cout << "============================================================\n";
        cout << "||           WELCOME TO E-COMMERCE STORE SYSTEM          ||\n";
        cout << "============================================================\n";
        cout << "||      1. Admin Login                                    ||\n";
        cout << "||      2. Client Login                                   ||\n";
        cout << "||      3. Register New Account                           ||\n";
        cout << "||      4. Exit System                                    ||\n";
        cout << "============================================================\n";
        cout << "\nEnter your choice: ";

        int main_choice;
        cin >> main_choice;
        cin.ignore(1000, '\n');

        // ============= ADMIN LOGIN =============
        if (main_choice == 1)
        {
            cout << "\n========================================\n";
            cout << "||       ADMIN LOGIN PANEL            ||\n";
            cout << "========================================\n";

            char input_username[30], input_password[30];
            cout << "Username: ";
            cin.getline(input_username, 30);
            cout << "Password: ";
            cin.getline(input_password, 30);

            // Check credentials
            bool auth = true;
            for (int i = 0; admin_username[i] != '\0' || input_username[i] != '\0'; i++)
            {
                if (admin_username[i] != input_username[i])
                {
                    auth = false;
                    break;
                }
            }
            if (auth)
            {
                for (int i = 0; admin_password[i] != '\0' || input_password[i] != '\0'; i++)
                {
                    if (admin_password[i] != input_password[i])
                    {
                        auth = false;
                        break;
                    }
                }
            }

            if (auth)
            {
                cout << "\nLogin Successful! Welcome Admin.\n";

                bool admin_logged_in = true;

                while (admin_logged_in)
                {
                    cout << "\n";
                    cout << "============================================================\n";
                    cout << "||                  ADMIN DASHBOARD                      ||\n";
                    cout << "============================================================\n";
                    cout << "||  1.  Add New Product                                  ||\n";
                    cout << "||  2.  View All Products                                ||\n";
                    cout << "||  3.  Update Product Details                           ||\n";
                    cout << "||  4.  Delete Product                                   ||\n";
                    cout << "||  5.  View All Customers                               ||\n";
                    cout << "||  6.  View Order History                               ||\n";
                    cout << "||  7.  View Revenue Statistics                          ||\n";
                    cout << "||  8.  Logout                                           ||\n";
                    cout << "============================================================\n";
                    cout << "Enter your choice: ";

                    int admin_choice;
                    cin >> admin_choice;
                    cin.ignore(1000, '\n');

                    // Add New Product
                    if (admin_choice == 1)
                    {
                        if (total_products < 50)
                        {
                            cout << "\n=== ADD NEW PRODUCT ===\n";
                            cout << "Product Name: ";
                            cin.getline(input_buffer, 100);
                            for (int i = 0; i < 100; i++)
                            {
                                product_names[total_products * 100 + i] = input_buffer[i];
                                if (input_buffer[i] == '\0') break;
                            }

                            cout << "Product Price ($): ";
                            cin >> product_prices[total_products];
                            cout << "Stock Quantity: ";
                            cin >> product_stock[total_products];
                            cin.ignore(1000, '\n');

                            cout << "Category: ";
                            cin.getline(input_buffer, 30);
                            for (int i = 0; i < 30; i++)
                            {
                                product_categories[total_products * 30 + i] = input_buffer[i];
                                if (input_buffer[i] == '\0') break;
                            }

                            total_products++;
                            cout << "\nProduct added successfully!\n";
                        }
                        else
                        {
                            cout << "\nProduct limit reached (50 products max).\n";
                        }
                    }

                    // View All Products
                    else if (admin_choice == 2)
                    {
                        cout << "\n================================================================================\n";
                        cout << "||                          PRODUCT CATALOG                                ||\n";
                        cout << "================================================================================\n";
                        cout << "|| ID || Product Name                  || Price ($) || Stock  || Category  ||\n";
                        cout << "================================================================================\n";

                        for (int i = 0; i < total_products; i++)
                        {
                            cout << "|| " << i + 1 << "  || ";

                            // Print product name
                            int nameLen = 0;
                            for (int j = 0; j < 100; j++)
                            {
                                if (product_names[i * 100 + j] == '\0') break;
                                cout << product_names[i * 100 + j];
                                nameLen++;
                            }
                            for (int s = nameLen; s < 29; s++) cout << " ";

                            cout << " || " << product_prices[i] << "   || "
                                 << product_stock[i] << "   || ";

                            // Print category
                            for (int j = 0; j < 30; j++)
                            {
                                if (product_categories[i * 30 + j] == '\0') break;
                                cout << product_categories[i * 30 + j];
                            }
                            cout << "\n";
                        }
                        cout << "================================================================================\n";
                    }

                    // Update Product
                    else if (admin_choice == 3)
                    {
                        cout << "\n=== UPDATE PRODUCT ===\n";
                        cout << "Enter Product ID to update: ";
                        int product_id;
                        cin >> product_id;
                        cin.ignore(1000, '\n');

                        if (product_id > 0 && product_id <= total_products)
                        {
                            int index = product_id - 1;
                            cout << "\nCurrent Details:\n";
                            cout << "Name: ";
                            for (int j = 0; j < 100; j++)
                            {
                                if (product_names[index * 100 + j] == '\0') break;
                                cout << product_names[index * 100 + j];
                            }
                            cout << "\nPrice: $" << product_prices[index] << "\n";
                            cout << "Stock: " << product_stock[index] << "\n";

                            cout << "\nEnter new price ($): ";
                            cin >> product_prices[index];
                            cout << "Enter new stock quantity: ";
                            cin >> product_stock[index];
                            cin.ignore(1000, '\n');

                            cout << "\nProduct updated successfully!\n";
                        }
                        else
                        {
                            cout << "\nInvalid Product ID!\n";
                        }
                    }

                    // Delete Product
                    else if (admin_choice == 4)
                    {
                        cout << "\n=== DELETE PRODUCT ===\n";
                        cout << "Enter Product ID to delete: ";
                        int product_id;
                        cin >> product_id;
                        cin.ignore(1000, '\n');

                        if (product_id > 0 && product_id <= total_products)
                        {
                            int index = product_id - 1;

                            // Shift all products down
                            for (int i = index; i < total_products - 1; i++)
                            {
                                // Copy name
                                for (int j = 0; j < 100; j++)
                                {
                                    product_names[i * 100 + j] = product_names[(i + 1) * 100 + j];
                                }
                                // Copy category
                                for (int j = 0; j < 30; j++)
                                {
                                    product_categories[i * 30 + j] = product_categories[(i + 1) * 30 + j];
                                }
                                product_prices[i] = product_prices[i + 1];
                                product_stock[i] = product_stock[i + 1];
                            }
                            total_products--;
                            cout << "\nProduct deleted successfully!\n";
                        }
                        else
                        {
                            cout << "\nInvalid Product ID!\n";
                        }
                    }

                    // View All Customers
                    else if (admin_choice == 5)
                    {
                        cout << "\n===================================================================\n";
                        cout << "||                     CUSTOMER LIST                           ||\n";
                        cout << "===================================================================\n";
                        cout << "|| ID || Username          || Email                 || Balance ||\n";
                        cout << "===================================================================\n";

                        for (int i = 0; i < total_customers; i++)
                        {
                            cout << "|| " << i + 1 << "  || ";

                            // Print username
                            int uLen = 0;
                            for (int j = 0; j < 30; j++)
                            {
                                if (customer_usernames[i * 30 + j] == '\0') break;
                                cout << customer_usernames[i * 30 + j];
                                uLen++;
                            }
                            for (int s = uLen; s < 17; s++) cout << " ";

                            cout << " || ";

                            // Print email
                            int eLen = 0;
                            for (int j = 0; j < 50; j++)
                            {
                                if (customer_emails[i * 50 + j] == '\0') break;
                                cout << customer_emails[i * 50 + j];
                                eLen++;
                            }
                            for (int s = eLen; s < 21; s++) cout << " ";

                            cout << " || $" << customer_balances[i] << "\n";
                        }
                        cout << "===================================================================\n";
                    }

                    // View Order History
                    else if (admin_choice == 6)
                    {
                        cout << "\n==============================================================================\n";
                        cout << "||                          ORDER HISTORY                                  ||\n";
                        cout << "==============================================================================\n";
                        cout << "|| ID || Customer     || Product                  || Qty || Total ($)     ||\n";
                        cout << "==============================================================================\n";

                        for (int i = 0; i < total_orders; i++)
                        {
                            cout << "|| " << i + 1 << "  || ";

                            // Print customer name
                            int cLen = 0;
                            for (int j = 0; j < 30; j++)
                            {
                                if (order_customer_names[i * 30 + j] == '\0') break;
                                cout << order_customer_names[i * 30 + j];
                                cLen++;
                            }
                            for (int s = cLen; s < 12; s++) cout << " ";

                            cout << " || ";

                            // Print product name
                            int pLen = 0;
                            for (int j = 0; j < 100; j++)
                            {
                                if (order_product_names[i * 100 + j] == '\0') break;
                                cout << order_product_names[i * 100 + j];
                                pLen++;
                            }
                            for (int s = pLen; s < 24; s++) cout << " ";

                            cout << " || " << order_quantities[i] << "   || $"
                                 << order_totals[i] << "\n";
                        }
                        cout << "==============================================================================\n";
                    }

                    // View Revenue Statistics
                    else if (admin_choice == 7)
                    {
                        double avg_order_value = 0.0;
                        if (total_orders > 0)
                        {
                            avg_order_value = total_revenue / total_orders;
                        }

                        cout << "\n=======================================\n";
                        cout << "||      REVENUE STATISTICS          ||\n";
                        cout << "=======================================\n";
                        cout << "|| Total Revenue:       $" << total_revenue << "\n";
                        cout << "|| Total Orders:        " << total_orders << "\n";
                        cout << "|| Avg Order Value:     $" << avg_order_value << "\n";
                        cout << "|| Total Products:      " << total_products << "\n";
                        cout << "|| Total Customers:     " << total_customers << "\n";
                        cout << "=======================================\n";
                    }

                    // Logout
                    else if (admin_choice == 8)
                    {
                        cout << "\nLogging out...\n";
                        admin_logged_in = false;
                    }

                    else
                    {
                        cout << "\nInvalid choice! Please try again.\n";
                    }
                }
            }
            else
            {
                cout << "\nInvalid credentials! Access denied.\n";
            }
        }

        // ============= CLIENT LOGIN =============
        else if (main_choice == 2)
        {
            cout << "\n========================================\n";
            cout << "||         CLIENT LOGIN PANEL        ||\n";
            cout << "========================================\n";

            char input_username[30], input_password[30];
            cout << "Username: ";
            cin.getline(input_username, 30);
            cout << "Password: ";
            cin.getline(input_password, 30);

            int customer_index = -1;
            for (int i = 0; i < total_customers; i++)
            {
                bool match = true;
                for (int j = 0; j < 30; j++)
                {
                    if (customer_usernames[i * 30 + j] != input_username[j])
                    {
                        match = false;
                        break;
                    }
                    if (customer_usernames[i * 30 + j] == '\0') break;
                }
                if (match)
                {
                    for (int j = 0; j < 30; j++)
                    {
                        if (customer_passwords[i * 30 + j] != input_password[j])
                        {
                            match = false;
                            break;
                        }
                        if (customer_passwords[i * 30 + j] == '\0') break;
                    }
                }
                if (match)
                {
                    customer_index = i;
                    break;
                }
            }

            if (customer_index != -1)
            {
                cout << "\nLogin Successful! Welcome ";
                for (int j = 0; j < 30; j++)
                {
                    if (customer_usernames[customer_index * 30 + j] == '\0') break;
                    cout << customer_usernames[customer_index * 30 + j];
                }
                cout << "!\n";

                bool client_logged_in = true;

                while (client_logged_in)
                {
                    cout << "\n";
                    cout << "============================================================\n";
                    cout << "||                  CLIENT DASHBOARD                     ||\n";
                    cout << "||  Balance: $" << customer_balances[customer_index] << "\n";
                    cout << "============================================================\n";
                    cout << "||  1.  Browse Products                                  ||\n";
                    cout << "||  2.  Add to Cart                                      ||\n";
                    cout << "||  3.  View Cart                                        ||\n";
                    cout << "||  4.  Remove from Cart                                 ||\n";
                    cout << "||  5.  Checkout                                         ||\n";
                    cout << "||  6.  View My Orders                                   ||\n";
                    cout << "||  7.  Update Balance                                   ||\n";
                    cout << "||  8.  Logout                                           ||\n";
                    cout << "============================================================\n";
                    cout << "Enter your choice: ";

                    int client_choice;
                    cin >> client_choice;
                    cin.ignore(1000, '\n');

                    // Browse Products
                    if (client_choice == 1)
                    {
                        cout << "\n================================================================================\n";
                        cout << "||                          PRODUCT CATALOG                                ||\n";
                        cout << "================================================================================\n";
                        cout << "|| ID || Product Name                  || Price ($) || Stock  || Category  ||\n";
                        cout << "================================================================================\n";

                        for (int i = 0; i < total_products; i++)
                        {
                            cout << "|| " << i + 1 << "  || ";

                            int nameLen = 0;
                            for (int j = 0; j < 100; j++)
                            {
                                if (product_names[i * 100 + j] == '\0') break;
                                cout << product_names[i * 100 + j];
                                nameLen++;
                            }
                            for (int s = nameLen; s < 29; s++) cout << " ";

                            cout << " || " << product_prices[i] << "   || "
                                 << product_stock[i] << "   || ";

                            for (int j = 0; j < 30; j++)
                            {
                                if (product_categories[i * 30 + j] == '\0') break;
                                cout << product_categories[i * 30 + j];
                            }
                            cout << "\n";
                        }
                        cout << "================================================================================\n";
                    }

                    // Add to Cart
                    else if (client_choice == 2)
                    {
                        cout << "\n=== ADD TO CART ===\n";
                        cout << "Enter Product ID: ";
                        int product_id;
                        cin >> product_id;
                        cout << "Enter Quantity: ";
                        int quantity;
                        cin >> quantity;
                        cin.ignore(1000, '\n');

                        if (product_id > 0 && product_id <= total_products)
                        {
                            int prod_index = product_id - 1;

                            if (product_stock[prod_index] >= quantity && quantity > 0)
                            {
                                if (cart_item_counts[customer_index] < 20)
                                {
                                    bool already_in_cart = false;
                                    int count = cart_item_counts[customer_index];

                                    for (int i = 0; i < count; i++)
                                    {
                                        if (cart_product_ids[customer_index * 20 + i] == prod_index)
                                        {
                                            cart_quantities[customer_index * 20 + i] += quantity;
                                            already_in_cart = true;
                                            break;
                                        }
                                    }

                                    if (!already_in_cart)
                                    {
                                        cart_product_ids[customer_index * 20 + count] = prod_index;
                                        cart_quantities[customer_index * 20 + count] = quantity;
                                        cart_item_counts[customer_index]++;
                                    }

                                    cout << "\n";
                                    for (int j = 0; j < 100; j++)
                                    {
                                        if (product_names[prod_index * 100 + j] == '\0') break;
                                        cout << product_names[prod_index * 100 + j];
                                    }
                                    cout << " added to cart!\n";
                                }
                                else
                                {
                                    cout << "\nCart is full! (Max 20 items)\n";
                                }
                            }
                            else
                            {
                                cout << "\nInsufficient stock or invalid quantity!\n";
                            }
                        }
                        else
                        {
                            cout << "\nInvalid Product ID!\n";
                        }
                    }

                    // View Cart
                    else if (client_choice == 3)
                    {
                        if (cart_item_counts[customer_index] > 0)
                        {
                            cout << "\n===================================================================\n";
                            cout << "||                       YOUR CART                            ||\n";
                            cout << "===================================================================\n";
                            cout << "|| ID || Product Name                  || Price || Qty || Sub  ||\n";
                            cout << "===================================================================\n";

                            double cart_total = 0.0;
                            int count = cart_item_counts[customer_index];

                            for (int i = 0; i < count; i++)
                            {
                                int prod_id = cart_product_ids[customer_index * 20 + i];
                                int qty = cart_quantities[customer_index * 20 + i];
                                double subtotal = product_prices[prod_id] * qty;
                                cart_total += subtotal;

                                cout << "|| " << prod_id + 1 << "  || ";

                                int nLen = 0;
                                for (int j = 0; j < 100; j++)
                                {
                                    if (product_names[prod_id * 100 + j] == '\0') break;
                                    cout << product_names[prod_id * 100 + j];
                                    nLen++;
                                }
                                for (int s = nLen; s < 29; s++) cout << " ";

                                cout << " || $" << product_prices[prod_id]
                                     << " || " << qty << "   || $" << subtotal << "\n";
                            }

                            cout << "===================================================================\n";
                            cout << "|| TOTAL: $" << cart_total << "\n";
                            cout << "===================================================================\n";
                        }
                        else
                        {
                            cout << "\nYour cart is empty!\n";
                        }
                    }

                    // Remove from Cart
                    else if (client_choice == 4)
                    {
                        if (cart_item_counts[customer_index] > 0)
                        {
                            cout << "\n=== REMOVE FROM CART ===\n";
                            cout << "Enter Product ID to remove: ";
                            int product_id;
                            cin >> product_id;
                            cin.ignore(1000, '\n');

                            if (product_id > 0 && product_id <= total_products)
                            {
                                int prod_index = product_id - 1;
                                bool found = false;
                                int count = cart_item_counts[customer_index];

                                for (int i = 0; i < count; i++)
                                {
                                    if (cart_product_ids[customer_index * 20 + i] == prod_index)
                                    {
                                        for (int j = i; j < count - 1; j++)
                                        {
                                            cart_product_ids[customer_index * 20 + j] = cart_product_ids[customer_index * 20 + j + 1];
                                            cart_quantities[customer_index * 20 + j] = cart_quantities[customer_index * 20 + j + 1];
                                        }
                                        cart_item_counts[customer_index]--;
                                        found = true;
                                        cout << "\nProduct removed from cart!\n";
                                        break;
                                    }
                                }

                                if (!found)
                                {
                                    cout << "\nProduct not found in cart!\n";
                                }
                            }
                            else
                            {
                                cout << "\nInvalid Product ID!\n";
                            }
                        }
                        else
                        {
                            cout << "\nYour cart is empty!\n";
                        }
                    }

                    // Checkout
                    else if (client_choice == 5)
                    {
                        if (cart_item_counts[customer_index] > 0)
                        {
                            double cart_total = 0.0;
                            int count = cart_item_counts[customer_index];

                            for (int i = 0; i < count; i++)
                            {
                                int prod_id = cart_product_ids[customer_index * 20 + i];
                                int qty = cart_quantities[customer_index * 20 + i];
                                cart_total += product_prices[prod_id] * qty;
                            }

                            cout << "\n=======================================\n";
                            cout << "||        CHECKOUT SUMMARY          ||\n";
                            cout << "=======================================\n";
                            cout << "|| Cart Total:   $" << cart_total << "\n";
                            cout << "|| Your Balance: $" << customer_balances[customer_index] << "\n";
                            cout << "=======================================\n";

                            if (customer_balances[customer_index] >= cart_total)
                            {
                                cout << "\nConfirm purchase? (y/n): ";
                                char confirm;
                                cin >> confirm;
                                cin.ignore(1000, '\n');

                                if (confirm == 'y' || confirm == 'Y')
                                {
                                    customer_balances[customer_index] -= cart_total;
                                    total_revenue += cart_total;

                                    for (int i = 0; i < count; i++)
                                    {
                                        int prod_id = cart_product_ids[customer_index * 20 + i];
                                        int qty = cart_quantities[customer_index * 20 + i];

                                        product_stock[prod_id] -= qty;

                                        if (total_orders < 100)
                                        {
                                            // Copy customer name to order
                                            for (int k = 0; k < 30; k++)
                                            {
                                                order_customer_names[total_orders * 30 + k] = customer_usernames[customer_index * 30 + k];
                                                if (customer_usernames[customer_index * 30 + k] == '\0') break;
                                            }
                                            // Copy product name to order
                                            for (int k = 0; k < 100; k++)
                                            {
                                                order_product_names[total_orders * 100 + k] = product_names[prod_id * 100 + k];
                                                if (product_names[prod_id * 100 + k] == '\0') break;
                                            }
                                            order_quantities[total_orders] = qty;
                                            order_totals[total_orders] = product_prices[prod_id] * qty;
                                            total_orders++;
                                        }
                                    }

                                    cart_item_counts[customer_index] = 0;

                                    cout << "\nPurchase successful! Thank you for shopping!\n";
                                    cout << "Remaining Balance: $" << customer_balances[customer_index] << "\n";
                                }
                                else
                                {
                                    cout << "\nPurchase cancelled.\n";
                                }
                            }
                            else
                            {
                                cout << "\nInsufficient balance! Please add funds.\n";
                            }
                        }
                        else
                        {
                            cout << "\nYour cart is empty!\n";
                        }
                    }

                    // View My Orders
                    else if (client_choice == 6)
                    {
                        bool has_orders = false;

                        cout << "\n=======================================================================\n";
                        cout << "||                      MY ORDER HISTORY                          ||\n";
                        cout << "=======================================================================\n";
                        cout << "|| ID || Product                  || Qty || Total ($)              ||\n";
                        cout << "=======================================================================\n";

                        for (int i = 0; i < total_orders; i++)
                        {
                            bool match = true;
                            for (int j = 0; j < 30; j++)
                            {
                                if (order_customer_names[i * 30 + j] != customer_usernames[customer_index * 30 + j])
                                {
                                    match = false;
                                    break;
                                }
                                if (order_customer_names[i * 30 + j] == '\0') break;
                            }

                            if (match)
                            {
                                cout << "|| " << i + 1 << "  || ";

                                int pLen = 0;
                                for (int j = 0; j < 100; j++)
                                {
                                    if (order_product_names[i * 100 + j] == '\0') break;
                                    cout << order_product_names[i * 100 + j];
                                    pLen++;
                                }
                                for (int s = pLen; s < 24; s++) cout << " ";

                                cout << " || " << order_quantities[i]
                                     << "   || $" << order_totals[i] << "\n";
                                has_orders = true;
                            }
                        }

                        if (!has_orders)
                        {
                            cout << "||                   No orders found                              ||\n";
                        }
                        cout << "=======================================================================\n";
                    }

                    // Update Balance
                    else if (client_choice == 7)
                    {
                        cout << "\n=== UPDATE BALANCE ===\n";
                        cout << "Current Balance: $" << customer_balances[customer_index] << "\n";
                        cout << "Enter amount to add ($): ";
                        double amount;
                        cin >> amount;
                        cin.ignore(1000, '\n');

                        if (amount > 0)
                        {
                            customer_balances[customer_index] += amount;
                            cout << "\nBalance updated successfully!\n";
                            cout << "New Balance: $" << customer_balances[customer_index] << "\n";
                        }
                        else
                        {
                            cout << "\nInvalid amount!\n";
                        }
                    }

                    // Logout
                    else if (client_choice == 8)
                    {
                        cout << "\nLogging out...\n";
                        client_logged_in = false;
                    }

                    else
                    {
                        cout << "\nInvalid choice! Please try again.\n";
                    }
                }
            }
            else
            {
                cout << "\nInvalid credentials! Access denied.\n";
            }
        }

        // ============= REGISTER NEW ACCOUNT =============
        else if (main_choice == 3)
        {
            if (total_customers < 20)
            {
                cout << "\n========================================\n";
                cout << "||      REGISTER NEW ACCOUNT         ||\n";
                cout << "========================================\n";

                char new_username[30];

                cout << "Enter Username: ";
                cin.getline(new_username, 30);

                bool username_exists = false;
                for (int i = 0; i < total_customers; i++)
                {
                    bool match = true;
                    for (int j = 0; j < 30; j++)
                    {
                        if (customer_usernames[i * 30 + j] != new_username[j])
                        {
                            match = false;
                            break;
                        }
                        if (customer_usernames[i * 30 + j] == '\0') break;
                    }
                    if (match)
                    {
                        username_exists = true;
                        break;
                    }
                }

                if (!username_exists)
                {
                    // Copy username
                    for (int i = 0; i < 30; i++)
                    {
                        customer_usernames[total_customers * 30 + i] = new_username[i];
                        if (new_username[i] == '\0') break;
                    }

                    cout << "Enter Password: ";
                    cin.getline(input_buffer, 30);
                    for (int i = 0; i < 30; i++)
                    {
                        customer_passwords[total_customers * 30 + i] = input_buffer[i];
                        if (input_buffer[i] == '\0') break;
                    }

                    cout << "Enter Email: ";
                    cin.getline(input_buffer, 50);
                    for (int i = 0; i < 50; i++)
                    {
                        customer_emails[total_customers * 50 + i] = input_buffer[i];
                        if (input_buffer[i] == '\0') break;
                    }

                    cout << "Enter Initial Balance ($): ";
                    cin >> customer_balances[total_customers];
                    cin.ignore(1000, '\n');

                    cart_item_counts[total_customers] = 0;

                    total_customers++;

                    cout << "\nAccount created successfully! You can now login.\n";
                }
                else
                {
                    cout << "\nUsername already exists! Please choose another.\n";
                }
            }
            else
            {
                cout << "\nCustomer limit reached (20 customers max).\n";
            }
        }

        // ============= EXIT SYSTEM =============
        else if (main_choice == 4)
        {
            cout << "\n";
            cout << "============================================================\n";
            cout << "||    Thank you for using E-Commerce Store System!        ||\n";
            cout << "||                    Goodbye!                            ||\n";
            cout << "============================================================\n\n";
            system_running = false;
        }

        else
        {
            cout << "\nInvalid choice! Please try again.\n";
        }
    }

    return 0;
}