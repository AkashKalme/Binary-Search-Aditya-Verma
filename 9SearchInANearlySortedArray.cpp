// Search in a Nearly Sorted Array

// Nearly Sorted Array: The element whose index is 'i' in sorted array,
//                      may be present at index 'i-1' or 'i' or 'i+1'.
// Apply Binary Search and check for element at 'mid-1' or 'mid' or 'mid+1' as well.

#include <bits/stdc++.h>

using namespace std;

int binarySearchNearlySorted(int arr[], int n, int x)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (x == arr[mid])
        {
            return mid;
        }
        else if (mid != 0 && x == arr[mid - 1])
        {
            return mid - 1;
        }
        else if (mid != n - 1 && x == arr[mid + 1])
        {
            return mid + 1;
        }
        else if (x < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[5] = {5, 10, 30, 20, 40};
    cout << "Index of 5: " << binarySearchNearlySorted(arr, 5, 5);
    cout << "\nIndex of 10: " << binarySearchNearlySorted(arr, 5, 10);
    cout << "\nIndex of 30: " << binarySearchNearlySorted(arr, 5, 30);
    cout << "\nIndex of 20: " << binarySearchNearlySorted(arr, 5, 20);
    cout << "\nIndex of 40: " << binarySearchNearlySorted(arr, 5, 40);
    cout << "\nIndex of 25: " << binarySearchNearlySorted(arr, 5, 25);
    return 0;
}