// Find the Maximum Element in Bitonic Array

// Bitonic Array: Monotonically Increasing first and then Decreasing

#include <bits/stdc++.h>

using namespace std;

int maximumElementIndex(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        // If arr[mid] greater than arr[mid-1] and arr[mid+1] return mid
        if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
        {
            return mid;
        }
        // If arr[mid] is less than arr[mid+1], set start = mid+1
        else if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        // Else set end = mid-1
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[6] = {1, 3, 8, 12, 4, 2};
    // int arr[4] = {0, 2, 1, 0};
    // int arr[4] = {0, 10, 5, 2};
    cout << "Index of Maximum Element: " << maximumElementIndex(arr, 6);
    return 0;
}