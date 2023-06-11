// Allocate Minimum Number of Pages

// There are k students and n books with ai pages. Find the minimum number of pages each student must read
// to read all books.

#include <bits/stdc++.h>

using namespace std;

bool isValid(int arr[], int n, int mid, int k)
{
    int sum = 0;
    int k_req = 1;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum > mid)
        {
            k_req++;
            sum = arr[i];
        }
        if (k_req > k)
        {
            return false;
        }
    }
    return true;
}

int minimumPages(int arr[], int n, int k)
{
    int sum = 0;
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        mini = min(mini, arr[i]);
    }
    int res = 0;
    int low = mini;
    int high = sum;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (isValid(arr, n, mid, k))
        {
            res = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return res;
}

int main()
{
    int arr[4] = {10, 20, 30, 40};
    int k = 2;
    cout << "Minimum Number of Pages to be Read by Each Student: " << minimumPages(arr, 4, k);
    return 0;
}