//Binary Search(iterative)

#include<bits/stdc++.h>
using namespace std;

int bsearch(int a[],int n,int key)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==key)
            return mid;
        else if(a[mid]>key)
                high=mid-1;
        else    
            low=mid+1;
    }
    return -1;
}

int main()
{
    int n,x;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n ; i++)
        cin>>a[i];

    cout<<"Enter the number to be searched\t";
    cin>>x;

    cout<<bsearch(a,n,x);
    return 0;
}
