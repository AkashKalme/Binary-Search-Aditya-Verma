// Find the Ceil of Element in a Sorted Array

// Ceil of wn Element in Array: Smallest Element Greater than equal to given Element

#include <bits/stdc++.h>

using namespace std;

int ceilElement(int arr[], int n, int x)
{
    int start = 0;
    int end = n - 1;
    int res = INT_MAX;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (x == arr[mid])
        {
            return arr[mid];
        }
        else if (x < arr[mid])
        {
            res = arr[mid];
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return res;
}

int main()
{
    int arr[9] = {2, 3, 3, 4, 8, 10, 10, 12, 19};
    cout << "Ceil Element of 5: " << ceilElement(arr, 9, 5);
    cout << "\nCeil Element of 12: " << ceilElement(arr, 9, 12);
    cout << "\nCeil Element of 20: " << ceilElement(arr, 9, 20);
    cout << "\nCeil Element of 1: " << ceilElement(arr, 9, 1);
    return 0;
}