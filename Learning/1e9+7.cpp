#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll M = 1e9 + 7;

ll fact(int n)
{
    ll f=1;
    for(int i=2;i<=n;i++)
        f=(f*i)%M;

    return f;
}

int main()
{
    ll n;
    cin >> n;
    cout<<fact(n);
    return 0;
}