// Naive pattern searching

#include <bits/stdc++.h>
using namespace std;

void nps(string &txt, string &pat)
{
    for (int i = 0; i <= txt.length() - pat.length(); i++)
    {
        if (txt[i] = pat[0])
        {
            int k = i, j;
            for (j = 0; j < pat.length(); j++)
            {
                if (txt[k] == pat[j])
                    k++;
                else
                    break;
            }
            if (j == pat.length())
                cout << i << '\t';
        }
    }
}

int main()
{
    string txt, pat;
    cin >> txt >> pat;
    nps(txt, pat);
    return 0;
}