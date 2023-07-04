// DP Memoization

#include <bits/stdc++.h>
using namespace std;

vector<int> memo(50,-1);

int fib(int n)
{
    if (memo[n] == -1)
    {
        int res;
        if (n == 0 || n == 1)
            res = n;
        else
            res = fib(n - 1) + fib(n - 2);
        memo[n] = res;
    }
    return memo[n];
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n);
    return 0;
}