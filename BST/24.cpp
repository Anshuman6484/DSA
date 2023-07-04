// Ceiling on left side of an array

#include <bits/stdc++.h>
using namespace std;

void ceiling_left(int a[], int n)
{
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(a[i]);
        auto it = s.upper_bound(a[i]);
        if (it == s.end())
            cout << -1 << ' ';
        else
            cout << (*it) << ' ';
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ceiling_left(a, n);
    return 0;
}