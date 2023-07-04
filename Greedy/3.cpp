// Activity selection problem

#include <bits/stdc++.h>
using namespace std;

bool mycomp(pair<int, int> a, pair<int, int> b)
{
    return (a.second < b.second);
}

int activity_selection(pair<int, int> a[], int n)
{
    sort(a, a + n, mycomp);                                 // Time complexity : O(nlogn)
    int res = 1, pre = 0;                                   // Aux space : O(1)
    for (int i = 1; i < n; i++)
    {
        if (a[i].first >= a[pre].second)
        {
            res++;
            pre = i;
        }
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    pair<int, int> p[n];
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        p[i] = {a, b};
    }
    cout << activity_selection(p, n);
    return 0;
}