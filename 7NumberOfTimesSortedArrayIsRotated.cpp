// Number of Times an Sorted Array is Rotated

// Find the Index of the Minimum Element in Array, that gives the number of times an array is sorted.

#include <bits/stdc++.h>

using namespace std;

int numberOfTimesRotated(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[(mid + n - 1) % n] > arr[mid] && arr[(mid + 1) % n] > arr[mid])
        {
            return (n - mid) % n;
        }
        else if (arr[mid] > arr[end])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return 0;
}

int main()
{
    int arr[9] = {11, 13, 16, 18, 2, 5, 7, 9, 10};
    // int arr[9] = {2, 5, 7, 9, 10, 11, 13, 16, 18};
    cout << "Number of Times Array is Rotated: " << numberOfTimesRotated(arr, 9) << "\n";
    return 0;
}