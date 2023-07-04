#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    // your code goes here
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, m, h;
        cin >> n >> m >> h;

        vector<ll> N, M;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            N.push_back(x);
        }
        for (ll i = 0; i < m; i++)
        {
            ll x;
            cin >> x;
            M.push_back(x);
        }
        ll sum = 0;
        sort(N.begin(), N.end(), greater<int>());
        sort(M.begin(), M.end(), greater<int>());

        for (ll i = 0; i < n && i < m; i++)
        {
            if (h != 0)
            {
                if (N[i] <= M[i])
                    sum += N[i];
                else
                {
                    ll prod = M[i] * h;
                    if (prod <= N[i])
                        sum += prod;
                    else
                        sum += N[i];
                }
            }
        }
        cout << sum << '\n';
    }
    return 0;
}
