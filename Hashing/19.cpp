//Union of two unsorted arrays

#include<bits/stdc++.h>
using namespace std;

int union_of_arrays(int a[],int n,int b[],int m)
{
    unordered_set<int> x(a,a+n);                                //Time complexity = O(m+n)
    for(int i=0 ; i<m ; i++)                                    //Aux space = O(m+n)
        x.insert(b[i]);
    return x.size();
}

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0 ; i<n ; i++)
        cin>>a[i];
    for(int i=0 ; i<m ; i++)
        cin>>b[i];
    cout<<union_of_arrays(a,n,b,m);
    return 0;
}