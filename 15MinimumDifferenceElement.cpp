// Minimum Difference Element in Sorted Array

#include <bits/stdc++.h>

using namespace std;

int minimumDifference(int arr[], int n, int x)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (x == arr[mid])
        {
            return arr[mid];
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
    if ((arr[start] - x) <= arr[end])
        return arr[start];
    return arr[end];
}

int main()
{
    int arr[5] = {1, 3, 8, 10, 15};
    // int arr[] = {1, 3, 8, 12, 15};
    cout << "Minimum Difference Element for 12 in Array: " << minimumDifference(arr, 5, 12);
    cout << "\nMinimum Difference Element for 10 in Array: " << minimumDifference(arr, 5, 10);
    cout << "\nMinimum Difference Element for 7 in Array: " << minimumDifference(arr, 5, 7);
    return 0;
}