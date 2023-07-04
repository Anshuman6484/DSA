//Find the index of the second largest element in an array

#include <bits/stdc++.h>
using namespace std;

/*
int second_largest(int a[],int n)
{
    int l=0,sl=1;
    if(a[l]<a[sl])
    {
        int k=l;
        l=sl;
        sl=k;
    }
    for(int i=2 ; i<n ; i++)
    {
        if(a[i]>a[l])
        {
            int x=l;
            l=i;
            sl=x;
        }
        else
        if(a[i]<a[l] && a[i]>a[sl])
            sl=i;
    }
    if(a[l]==a[sl])
        return -1;
    return sl;
}
*/

int second_largest(int a[],int n)
{
    int res=-1,largest=0;
    for(int i=1; i<n ; i++)
    {
        if(a[i]>a[largest])
        {
            res=largest;
            largest=i;
        }
        else if(a[i]!=a[largest])
        {
            if(res==-1 || a[i]>a[res])
                res=i;
        }
    }
    return res;
}

int main()
{
    int n,x;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n ; i++)
        cin>>a[i];

    cout<<"Index of second largest element is"<<' '<< second_largest(a,n);
    return 0;
}
