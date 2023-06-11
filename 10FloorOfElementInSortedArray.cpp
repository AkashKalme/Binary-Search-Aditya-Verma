// Find the Floor of Element in a Sorted Array

// Floor of wn Element in Array: Greatest Element Smaller than equal to given Element

#include <bits/stdc++.h>

using namespace std;

int floorElement(int arr[], int n, int x)
{
    int start = 0;
    int end = n - 1;
    int res = 0;
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
            res = arr[mid];
            start = mid + 1;
        }
    }
    return res;
}

int main()
{
    int arr[9] = {2, 3, 3, 4, 8, 10, 10, 12, 19};
    cout << "Floor Element of 5: " << floorElement(arr, 9, 5);
    cout << "\nFloor Element of 12: " << floorElement(arr, 9, 12);
    cout << "\nFloor Element of 20: " << floorElement(arr, 9, 20);
    cout << "\nFloor Element of 1: " << floorElement(arr, 9, 1);
    return 0;
}