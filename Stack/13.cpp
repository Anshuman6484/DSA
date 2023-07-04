//Previous greater element

#include<bits/stdc++.h>
using namespace std;

void pge(int a[],int n)
{
    stack<int> s;
    s.push(a[0]);
    cout<<-1<<'\t';
    for(int i=1;i<n;i++)
    {
        while(s.empty()==false && s.top()<=a[i])                //Time complexity : O(n)
            s.pop();

        int pg = s.empty() ? -1 : s.top();
        cout<<pg<<'\t';
        s.push(a[i]);
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    pge(a,n);
    return 0;
}