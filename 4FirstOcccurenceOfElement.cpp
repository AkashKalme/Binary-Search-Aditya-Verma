// First Occurence of an Element in the Array

// Continue the Search until start<=end
// if element is at mid, keep end = mid-1
// else same as binary search

#include <iostream>

using namespace std;

int firstOccurence(int arr[], int n, int x)
{
    int res = -1;
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == x)
        {
            res = mid;
            end = mid - 1;
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
    return res;
}

int main()
{
    int n;
    cout << "Enter the Number of Elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " Elements Separated by Space: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "Enter the element whose first occurence is to be found: ";
    cin >> x;
    cout << "First Occurence of " << x << " is at: " << firstOccurence(arr, n, x);
    return 0;
}