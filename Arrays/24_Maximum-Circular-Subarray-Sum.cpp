#include <bits/stdc++.h>
using namespace std;

int max_circular_sub_sum(int a[], int n)
{
    int max_end = 0, res_n = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        max_end = max(max_end + a[i], a[i]);
        res_n = max(res_n, max_end);
    }

    if (res_n < 0)
        return res_n;

    int min_end = 0, k = INT_MAX, res_c = 0;

    for (int i = 0; i < n; i++)
    {
        min_end = min(min_end + a[i], a[i]);
        k = min(k, min_end);
    }

    for (int i = 0; i < n; i++)
        res_c += a[i];

    res_c -= k;

    return max(res_c, res_n);
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << max_circular_sub_sum(a, n) << endl;
    return 0;
}