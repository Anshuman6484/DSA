// Job Sequencing Problem

#include <bits/stdc++.h>
using namespace std;

bool mycomp(pair<int, int> a, pair<int, int> b)
{
    if (a.first < b.first)
        return true;
    else if (a.first == b.first)
        return a.second > b.second;
    return false;
}

int job_sequencing(pair<int, int> p[], int n)
{
    sort(p, p + n, mycomp);
    int res = 0, count = 1;
    for (int i = 0; i < n; i++)
    {
        if (count <= p[i].first)
        {
            res += p[i].second;
            count++;
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
    cout << job_sequencing(p, n);
    return 0;
}