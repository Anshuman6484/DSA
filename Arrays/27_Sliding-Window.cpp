#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int k, sum, curr_sum = 0;
    cin >> k >> sum;

    bool flag = false;

    for (int i = 0; i < k; i++)
        curr_sum += a[i];

    for (int i = k; i < n; i++)
    {
        curr_sum += a[i] - a[i - k];
        if (curr_sum == sum)
        {
            flag = true;
            break;
        }
    }

    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}