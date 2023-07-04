//Generate numbers with given digits

#include<bits/stdc++.h>
using namespace std;

void printfirstN(string &a,string &b,int n)
{
    queue<string> q;
    q.push(a);
    q.push(b);
    int count=0;
    for( ;count<n;count++)
    {
        string curr = q.front();
        cout<<curr<<' ';
        q.pop();
        q.push(curr+a);
        q.push(curr+b);
    }
}

int main()
{
    string a,b;
    cin>>a>>b;
    int n;
    cin>>n;

    printfirstN(a,b,n);
    return 0;
}