//Selection sort

#include<bits/stdc++.h>
using namespace std;

void selectionsort(int a[],int n)
{
    for(int i=0 ; i<n-1; i++)
    {
        int min_ind=i;
        for(int j=i+1 ; j<n ; j++)
            if(a[j]<a[min_ind])
                min_ind=j;
        swap(a[min_ind],a[i]);
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int y=0 ; y<n ; y++)
        cin>>a[y];

    selectionsort(a,n);
    for(int y=0; y<n ; y++)
        cout<<a[y]<<'\t';
    
    return 0;
}