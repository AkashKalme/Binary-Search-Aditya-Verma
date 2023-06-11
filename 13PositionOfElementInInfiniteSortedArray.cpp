// Find the Position of an Element in an Infinite Sorted Array

#include <bits/stdc++.h>

using namespace std;

int findElement(int arr[], int x)
{
    int start = 0;
    int end = 1;
    while (x > arr[end])
    {
        start = end;
        end *= 2;
    }
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
}

int main()
{
    int arr[] = {3, 5, 7, 9, 10, 90, 100, 130, 140, 160, 170, 180, 200, 220, 230, 250};
    cout << "Element 3 found at Index: " << findElement(arr, 3);
    cout << "\nElement 100 found at Index: " << findElement(arr, 100);
    cout << "\nElement 10 found at Index: " << findElement(arr, 10);
    return 0;
}
