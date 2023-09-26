#include <bits/stdc++.h>
using namespace std;

int majority(int a[], int n)
{
    int res = 0, cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[res] == a[i])
            cnt++;
        else
            cnt--;

        if (cnt == 0)
        {
            res = i;
            cnt = 1;
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++)
        if (a[res] == a[i])
            count++;

    if (count <= n / 2)
        return -1;

    return res;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    if (majority(a, n) == -1)
        cout << -1 << '\n';
    else
        cout << a[majority(a, n)] << '\n';
    return 0;
}