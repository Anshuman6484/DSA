// Power of two

#include <bits/stdc++.h>
using namespace std;

bool powerofTwo(int n)
{
    return (n != 0) && ((n & n - 1) == 0);
}

int main()
{
    int n;
    cin >> n;

    if (powerofTwo(n))
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}