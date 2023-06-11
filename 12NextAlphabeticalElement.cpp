// Find the Next Alphabetical Element

// If the target current element is greater than x, set res as current element and end as mid-1
// Else set start as mid+1

#include <bits/stdc++.h>

using namespace std;

char nextAlphabet(char ch[], int n, char x)
{
    char res = 'a';
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (x < ch[mid])
        {
            res = ch[mid];
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
    char ch[10] = {'a', 'b', 'd', 'f', 'i', 'l', 'n', 'q', 's', 'x'};
    cout << "Next Element of a: " << nextAlphabet(ch, 10, 'a');
    cout << "\nNext Element of g: " << nextAlphabet(ch, 10, 'g');
    cout << "\nNext Element of j: " << nextAlphabet(ch, 10, 'j');
    cout << "\nNext Element of y: " << nextAlphabet(ch, 10, 'y');
    cout << "\nNext Element of s: " << nextAlphabet(ch, 10, 's');
    return 0;
}