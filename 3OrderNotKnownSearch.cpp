// Binary Search if the order of elements is NOT known (No Duplicates)
#include <iostream>

using namespace std;

int binarySearch(int arr[], int n, int x)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == x)
            return mid;
        else
        {
            if (arr[mid] > x)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
    }
    return -1;
}

int reverseBinarySearch(int arr[], int n, int x)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else
        {
            if (arr[mid] < x)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the Number of Elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements separated by space in ascending or descending order: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "Enter Element to be searched: ";
    cin >> x;
    if (n == 1)
    {
        if (arr[0] == x)
            cout << "Index of the element is: 0";
        else
            cout << "Index of the element is: -1";
    }
    else
    {
        if (arr[0] < arr[1])
            cout << "Index of the element is: " << binarySearch(arr, n, x);
        else
            cout << "Index of the element is: " << reverseBinarySearch(arr, n, x);
    }
    return 0;
}