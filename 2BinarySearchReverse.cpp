// Binary Search on Descending Array
#include <iostream>

using namespace std;

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
    cout << "Enter " << n << " elements separated by space in descending order: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "Enter the element to be searched: ";
    cin >> x;
    cout << "Element " << x << " is at position: " << reverseBinarySearch(arr, n, x);
    return 0;
}