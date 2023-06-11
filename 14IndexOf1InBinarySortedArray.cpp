// Find the First Occurence of 1 in Infinite Binary Sorted Array

#include <bits/stdc++.h>

using namespace std;

int firstOne(int arr[])
{
    int start = 0;
    int end = 1;
    while (arr[end] == 0)
    {
        start = end;
        end *= 2;
    }
    int res = 0;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == 1)
        {
            res = mid;
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
    int arr[] = {0, 0, 0, 0, 1, 1, 1, 1, 1, 1};
    // int arr[] = {
    //     0,
    //     0,
    //     0,
    //     0,
    //     0,
    //     0,
    //     0,
    //     0,
    //     0,
    //     0,
    //     0,
    //     0,
    //     0,
    //     0,
    //     0,
    //     0,
    //     0,
    //     0,
    //     0,
    //     0,
    //     0,
    //     0,
    //     0,
    //     0,
    //     0,
    //     0,
    //     0,
    //     0,
    //     0,
    //     0,
    //     0,
    //     0,
    //     0,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    //     1,
    // };
    cout << "First Position of 1: " << firstOne(arr);
    return 0;
}