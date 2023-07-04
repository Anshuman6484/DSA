//Bubble sort

#include<bits/stdc++.h>
using namespace std;

void bubblesort(int a[],int n)
{
    for(int i=0 ; i<n-1 ; i++)
    {
        //optimization
        int swapped=false;
        for(int j=0 ; j<n-i-1 ; j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                swapped=true;
            }
        }
        if(swapped==false)
            break;
    }
    
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int y=0 ; y<n ; y++)
        cin>>a[y];

    bubblesort(a,n);
    for(int y=0 ; y<n ; y++)
        cout<<a[y]<<'\t';

    return 0;
}