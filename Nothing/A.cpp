#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    string s;
    cin >> s;
    ll ans = s.size() / 2;
    if (s.size() & 1)
    {
        ll c = 0;
        for (auto i : s)
            if (i == '1')
                c++;
        ans += (c > 1);
        cout << ans;
    }
    else
    {
        cout << ans;
    }
    return 0;
}
