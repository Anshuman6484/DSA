// Power set

#include <bits/stdc++.h>
using namespace std;

void print_powerset(string s)
{
    int n = s.length();
    int powsize = pow(2, n);
    for (int i = 0; i < powsize; i++)
    {
        for (int j = 0; j < n; j++)
            if (i & (1 << j) != 0)
                cout << s[j];
        cout << '\n';
    }
}

int main()
{
    string s;
    cin >> s;
    cout << '\n';
    print_powerset(s);
    return 0;
}
