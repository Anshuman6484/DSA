//Palindrome check

#include<bits/stdc++.h>
using namespace std;


string ispalindrome(string &s)
{
    int x=s.size(),i;
    for(i=0 ; i<x/2 ; i++)
    {
        if(s[i]==s[x-i-1]);
        else
            break;
    }
    if(i==x/2)
        return "YES";
    else
        return "NO";
}


int main()
{
    string s;
    getline(cin,s);
    /*
    string y = s;
    reverse(s.begin(),s.end());
    if(y==s)
        cout<<"YES";
    else    
        cout<<"NO";
    */
   cout<<ispalindrome(s);
    return 0;
}