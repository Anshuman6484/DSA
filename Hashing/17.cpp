//Frequency of array elements

#include<bits/stdc++.h>
using namespace std;

/*
void intfreq(int arr[],int n)
{
    for(int i=0 ; i<n ; i++)
    {
        bool flag = false;
        for(int j=0 ; j<i ; j++)
        {
            if(arr[i]==arr[j])                          //Time complexity = O(n^2)
            {                                           //Aux space = O(1)
                flag=true;
                break;
            }
        }
        if(flag==true)
            continue;
        int freq=1;
        for(int j=i+1 ; j<n ; j++)
            if(arr[i]==arr[j])
                freq++;

        cout<<arr[i]<<" "<<freq<<'\n';
    }
}
*/

void intfre(int arr[],int n)
{
    unordered_map<int,int>hash;
    /*
    for(int i=0 ; i<n ; i++)
    {
        if(hash.count(arr[i])>0)                    //Code written by ME
            hash[arr[i]] += 1;
        hash.insert({arr[i],1});
    }
    */
    for(int x=0 ; x<n ; x++)
        hash[arr[x]]++;                                   //Time complexity = 0(n)
    for(auto x : hash)                                    //Aux space = O(n)
        cout<<x.first<<' '<<x.second<<'\n';
}

int main()
{
    int n; 
    cin>>n;
    int a[n];
    for(int i=0 ; i<n ; i++)
        cin>>a[i];
    //  intfreq(a,n);
    intfre(a,n);
    return 0;
}