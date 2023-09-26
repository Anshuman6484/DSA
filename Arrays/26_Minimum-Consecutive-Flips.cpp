#include <bits/stdc++.h>
using namespace std;

int m_c_f(int arr[], int n)
{
    int res = 0;
    for (int i = 1; i < n; i++)
        if (arr[i - 1] != arr[i] && arr[i] != arr[0])
            res++;
    return res;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << m_c_f(a, n) << '\n';
    return 0;
}