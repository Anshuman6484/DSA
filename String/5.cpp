//Check if a string is subsequence of other

#include<bits/stdc++.h>
using namespace std;

int check_subsequence(string s1,string s2)
{
    int i=0,j=0,m,n;
    m = s1.size();
    n = s2.size();
    
    if(n>m)
        return 0;
    while(i<m && j<n)
    {
        if(s1[i]==s2[j])
        {
            i++;
            j++;
        }
        else
            i++;
    }

    if(j==n)
        return 1;
    else
        return 0;
}

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int x = check_subsequence(s1,s2);
    if(x)
        cout<<"True\n";
    else
        cout<<"False\n";
    return 0;
}