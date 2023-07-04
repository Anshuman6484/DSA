//Leftmost repeating character

#include<bits/stdc++.h>
using namespace std;

/*
1.Better aprroach  O(n) :-
const int CHAR = 256;

int lrc(string &s)
{
    int count[CHAR] = {0}; 
    for(int i=0 ; i<s.length() ; i++)
        count[s[i]]++;
    for(int i=0 ; i<s.length() ; i++)
        if(count[s[i]]>1)
            return i;

    return -1;
}
*/

/*
2.Efficient-1  approach  O(n+CHAR) :-
const int CHAR = 256;

int lrc(string &s)
{
    int findex[CHAR];
    fill(findex,findex+CHAR,-1);
    int res = INT_MAX;
    for(int i=0 ; i<s.length() ; i++)
    {
        int fi=findex[s[i]];
        if(fi==-1)
            findex[s[i]]=i;
        else
            res=min(res,fi);
    }
    return (res==INT_MAX)?-1:res;
}
*/


//  3.Efficient-2 approach  O(n+CHAR) :-
const int CHAR = 256;
int lrc(string &s)
{
    bool visited[CHAR];
    fill(visited,visited+CHAR,false);
    int res=-1;
    for(int i=s.length() ; i>=0 ; i--)
    {
        if(visited[s[i]])
            res=i;
        else
            visited[s[i]]=true;
    }
    return res;
}


int main()
{
    string s;
    cin>>s;
    cout<<lrc(s);
    return 0;
}