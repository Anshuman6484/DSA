#include <bits/stdc++.h>
using namespace std;

int even_odd(int a[], int n)
{
    int res = 1, k = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] % 2 == 0 && a[i] % 2 != 0)
            k++;
        else if (a[i - 1] % 2 != 0 && a[i] % 2 == 0)
            k++;
        else
            k = 1;
        res = max(res, k);
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

    cout << even_odd(a, n) << endl;
    return 0;
}