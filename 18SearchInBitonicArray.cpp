// Search an Element in a Bitonic Array

#include <bits/stdc++.h>

using namespace std;

int binarySearchAscending(int arr[], int start, int end, int x)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (x == arr[mid])
        {
            return mid;
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

int binarySearchDescending(int arr[], int start, int end, int x)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (x == arr[mid])
        {
            return mid;
        }
        else if (x < arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int findPeakElementIndex(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[9] = {1, 3, 8, 10, 12, 16, 15, 5, 2};
    int ind = findPeakElementIndex(arr, 9);
    cout << "Index of 16: " << max(binarySearchAscending(arr, 0, ind - 1, 16), binarySearchDescending(arr, ind, 8, 16));
    cout << "\nIndex of 8: " << max(binarySearchAscending(arr, 0, ind - 1, 8), binarySearchDescending(arr, ind, 8, 8));
    cout << "\nIndex of 5: " << max(binarySearchAscending(arr, 0, ind - 1, 5), binarySearchDescending(arr, ind, 8, 5));
    cout << "\nIndex of 4: " << max(binarySearchAscending(arr, 0, ind - 1, 4), binarySearchDescending(arr, ind, 8, 4));
    return 0;
}