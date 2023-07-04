//Intersection of two arrays

#include<bits/stdc++.h>
using namespace std;

int intersect(int a[],int n,int b[],int m)
{
    int res=0;
    unordered_set<int> x(a,a+n);
    
    for(int i=0 ; i<m ; i++)                            //Time complexity = O(m+n)
    {                                                   //Aux space = O(n)
        if(x.find(b[i])!=x.end())
        {
            res++;
            x.erase(b[i]);
        }
    }
    return res;
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
    cout<<intersect(a,n,b,m);
    return 0;
}