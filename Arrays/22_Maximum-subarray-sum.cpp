#include <bits/stdc++.h>
using namespace std;

int max_sub_sum(int a[], int n)
{
    int max_end = 0, res = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        max_end = max(max_end + a[i], a[i]);
        res = max(res, max_end);
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

    cout<<max_sub_sum(a, n)<<endl;
    return 0;
}