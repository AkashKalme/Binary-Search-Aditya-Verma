// Search in a Row wise and Column wise Sorted Array

// Start from top right corner
// If element is x return i, j
// Else if element is greater than x, j--
// Else i++

#include <bits/stdc++.h>

using namespace std;

vector<int> searchElement(vector<vector<int>> arr, int n, int m, int x)
{
    int i = 0;
    int j = m - 1;
    while (i < n && j >= 0)
    {
        if (x == arr[i][j])
        {
            return {i, j};
        }
        else if (x < arr[i][j])
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return {-1, -1};
}

int main()
{
    vector<vector<int>> arr = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}};
    cout << "Index of 29: [" << searchElement(arr, 4, 4, 29)[0] << ", " << searchElement(arr, 4, 4, 29)[1] << "]";
    cout << "\nIndex of 32: [" << searchElement(arr, 4, 4, 32)[0] << ", " << searchElement(arr, 4, 4, 32)[1] << "]";
    cout << "\nIndex of 48: [" << searchElement(arr, 4, 4, 48)[0] << ", " << searchElement(arr, 4, 4, 48)[1] << "]";
    cout << "\nIndex of 23: [" << searchElement(arr, 4, 4, 23)[0] << ", " << searchElement(arr, 4, 4, 23)[1] << "]";
    return 0;
}