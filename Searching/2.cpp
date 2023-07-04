//Binary search(recursive)

#include <bits/stdc++.h>
using namespace std;

int bsearch(int a[],int n,int low,int high,int x)
{
    if(low>high)
        return -1;
    int mid=(low+high)/2;
    if(a[mid]==x)
        return mid;
    else if(a[mid]>x)
            return bsearch(a,n,low,mid-1,x);
    else if(a[mid]<x)
            return bsearch(a,n,mid+1,high,x);
}

int main()
{
    int n,x;
    cin>>n;
    int a[n];

    for(int i=0 ; i<n ; i++)
        cin>>a[i];

    cout<<"Enter the number to be searched\t";
    cin>> x;

    cout<<bsearch(a,n,0,n-1,x);
    return 0;
}

