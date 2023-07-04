//Check if an array is sorted

#include<bits/stdc++.h>
using namespace std;

string check_sort(int a[],int n)
{
    string s = "Yes";
    for(int i=1 ; i<n ; i++)
    {
        if(a[i]<a[i-1])
        {
            s="No";
            break;
        }
    }
    return s;
}

int main()
{
    int n,x;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n ; i++)
        cin>>a[i];

    string s;

    cout<<check_sort(a,n);
    return 0;
}