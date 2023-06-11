// Find an element in rotated sorted array

// Find the Index of the Minimum Element in Array
// Apply simple binary search on lower half and upper half and return result.

#include <bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int start, int end, int x)
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

int minimumElementIndex(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] < arr[mid - 1] && arr[mid] < arr[mid + 1])
        {
            return mid;
        }
        else if (arr[mid] < arr[end])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
}

int main()
{
    int arr[9] = {11, 13, 16, 18, 2, 5, 7, 9, 10};
    // int arr[9] = {2, 5, 7, 9, 10, 11, 13, 16, 18};
    int minIndex = minimumElementIndex(arr, 9);
    int index16 = -1;
    int beforeMin = binarySearch(arr, 0, minIndex - 1, 16);
    int afterMin = binarySearch(arr, minIndex, 8, 16);
    if (beforeMin != -1)
    {
        index16 = beforeMin;
    }
    else
    {
        index16 = afterMin;
    }
    cout << "Index of Element 16: " << index16;
    return 0;
}