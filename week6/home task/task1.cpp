#include <iostream>
using namespace std;
int calculateSum(int arr[], int n)
{
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " numbers:" << endl;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = calculateSum(arr, n);

    cout << "Sum of all elements: " << result << endl;
}