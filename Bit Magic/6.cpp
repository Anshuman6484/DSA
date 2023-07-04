// Check if Kth bit is set or not

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int32_t n, k;
    cin >> n >> k;
    if (n & (1 << (k - 1)) != 0)
        // if ((n >> (k - 1)) & 1 == 1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
