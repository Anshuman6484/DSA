//Next greater element

#include<bits/stdc++.h>
using namespace std;

void nge(int a[],int n)
{
    stack<int> s;
    s.push(a[n-1]);
    int b[n];
    b[n-1]=-1;
    for(int i=n-2;i>=0;i--)
    {
        while(s.empty()==false && s.top()<=a[i])                //Time complexity : O(n)
            s.pop();

        int ng = s.empty() ? -1 : s.top();
        b[i]=ng;
        s.push(a[i]);
    }
    for(int i=0;i<n;i++)
        cout<<b[i]<<'\t';
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    nge(a,n);
    return 0;
}