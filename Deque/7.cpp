// Maximums of all subarryas of size k

#include <bits/stdc++.h>
using namespace std;

void max_of_subarr(vector<int> v, int k)
{
    int n = v.size();
    for (int i = 0; i <= n - k; i++)
        cout << *max_element(v.begin() + i, v.begin() + k + i) << ' ';
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    max_of_subarr(v, k);
    return 0;
}