// Find missing number

#include <bits/stdc++.h>
using namespace std;

int find_missing(int a[], int n)
{
    int count = 0, a_count = 0, res;
    for (int i = 1; i <= n + 1; i++)
        count = count ^ i;
    for (int i = 0; i < n; i++)
        a_count = a_count ^ a[i];
    res = count ^ a_count;
    return res;
}

int main()
{
    int k;
    cin >> k;
    int n = k - 1;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << '\n'<< find_missing(a, n);
    return 0;
}