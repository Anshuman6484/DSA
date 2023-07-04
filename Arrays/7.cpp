//Find the index of the largest element in an array

#include<bits/stdc++.h>
using namespace std;

int index_of_LA(int a[],int n)
{
    int x=0;
    for(int i=1 ; i<n ; i++)
        if(a[i]>a[x])
            x=i;
    return x;
}

int main()
{
    int n,x;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n ; i++)
        cin>>a[i];

    cout<<"Index of largest element is"<<' '<< index_of_LA(a,n);
    return 0;
}