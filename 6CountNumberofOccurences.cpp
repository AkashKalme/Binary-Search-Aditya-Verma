// Count the Number of Occurences of an Element in a Array

// Find the First and Last Occurences
// No. of ELements = last-first+1

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
        if (x == arr[mid])
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

int lastOccurence(int arr[], int n, int x)
{
    int res = -1;
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (x == arr[mid])
        {
            res = mid;
            start = mid + 1;
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
    cout << "Enter the Number of Elements in Array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " Elements separated by Space: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "Enter the Element whose Number of Occurences are to be Found: ";
    cin >> x;
    cout << "Number of Occurences of " << x << " are: " << lastOccurence(arr, n, x) - firstOccurence(arr, n, x) + 1;
    return 0;
}