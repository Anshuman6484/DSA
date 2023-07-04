//Leftmost non-repeating character

#include<bits/stdc++.h>
using namespace std;

const int CHAR = 256;

/*
int lnrc(string &s)
{
    int freq[CHAR] = {0};
    for(int i=0 ; i<s.length() ; i++)
        freq[s[i]]++;
    for(int i=0 ; i<s.length() ; i++)
    {
        if(freq[s[i]]==1)
        {
            return i;
            break;
        }
    }
    return -1;
}
*/

//Using only 1 loop

int lnrc(string &s)
{
    int count[CHAR];
    fill(count,count+CHAR,-1);
    for (int i=0 ; i<s.length() ; i++)
    {
        if(count[s[i]]==-1)
            count[s[i]]=i;
        else
            count[s[i]]=-2;
    }
    int res = INT_MAX;
    for(int i=0 ; i<CHAR ; i++)
    {
        if(count[i]>=0)
            res = min(res,count[i]);
    }
    return (res==INT_MAX)?-1:res;
      
}

int main()
{
    string s;
    cin>>s;
    cout<<lnrc(s);
    return 0;
}