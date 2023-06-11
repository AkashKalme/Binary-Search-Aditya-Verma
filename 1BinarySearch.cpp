// Simple Binary Search
#include <iostream>

using namespace std;

// Binary Search Function
int binarySearch(int arr[], int n, int x)
{
    // Set 'start' and 'end'
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        // If element is found, return index of the element
        if (arr[mid] == x)
            return mid;
        else
        {
            // If element is smaller than mid element, set end to mid-1
            if (arr[mid] > x)
            {
                end = mid - 1;
            }
            // Else set start to mid+1
            else
            {
                start = mid + 1;
            }
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the Number of Elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements separated by space in ascending order: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "Enter Element to be searched: ";
    cin >> x;
    cout << "Index of the element is: " << binarySearch(arr, n, x);
    return 0;
}

// TC: O(log n)
// SC: O(n)
