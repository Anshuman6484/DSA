// Two odd occuring numbers

#include <bits/stdc++.h>
using namespace std;

void odd_occuring(int a[], int n)
{
    int XOR = 0, res1 = 0, res2 = 0;
    for (int i = 0; i < n; i++)
        XOR = XOR ^ a[i];

    int sn = XOR & ~(XOR - 1);
    for (int i = 0; i < n; i++)
    {
        if ((a[i] & sn) != 0)
            res1 = res1 ^ a[i];
        else
            res2 = res2 ^ a[i];
    }
    cout << '\n'
         << res1 << ' ' << res2;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    odd_occuring(a, n);
    return 0;
}