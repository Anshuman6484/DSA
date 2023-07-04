// More than n_k occurences

#include <bits/stdc++.h>
using namespace std;

void print_n_k(int a[], int n, int k)
{
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
        m[a[i]]++;

    for (auto i : m)
        if (i.second > n / k)
            cout << i.first << ' ';
}

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << '\n';
    print_n_k(a, n, k);
    return 0;
}