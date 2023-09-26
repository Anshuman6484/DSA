#include <bits/stdc++.h>
using namespace std;

int rem_dup(int a[], int n)
{
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[res - 1])
        {
            a[res] = a[i];
            res++;
        }
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int size = rem_dup(a, n);
    for (int i = 0; i < size; i++)
        cout << a[i] << ' ';
    cout << '\n'
         << size << endl;
    return 0;
}