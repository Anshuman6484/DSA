// Fractional Knapsack

#include <bits/stdc++.h>
using namespace std;

bool mycomp(pair<int, int> a, pair<int, int> b)
{
    return (double(a.second / a.first) > double(b.second / b.first));
}

double fractional_knapsack(pair<int, int> p[], int n, int cap)
{
    sort(p, p + n, mycomp);                                                                         // Time complexity : O(nlogn)
    double res = 0;                                                                                 // Aux space : O(1)
    for (int i = 0; i < n; i++)
    {
        if (p[i].first <= cap)
        {
            res += p[i].second;
            cap -= p[i].first;
        }
        else
        {
            res += ((double)cap / (double)p[i].first) * (double)p[i].second;
            break;
        }
    }
    return res;
}

int main()
{
    int n, cap;
    cin >> n >> cap;
    pair<int, int> p[n];
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        p[i] = {a, b};
    }
    cout << fractional_knapsack(p, n, cap);
    return 0;
}