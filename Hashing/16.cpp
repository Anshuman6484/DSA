//Count distinct elements

#include<bits/stdc++.h>
using namespace std;

/*
int countdist(int arr[],int n)                  
{
    int res=0;
    for(int i=0 ; i<n ; i++)
    {
        bool flag = false;
        for(int j=0 ; j<i ; j++)
        {
            if(arr[i]==arr[j])                      //Time complexity = O(n^2)
            {                                       //Aux space = O(1)
                flag = true;
                break;
            }
        }
        if(flag==false)
        res++;
    }
    return res;
}
*/

//Efficient solution
int countdis(int arr[],int n)
{
    /*
    unordered_set<int> s;
    for(int i=0 ; i<n ; i++)                        //Time complexity = O(n)
        s.insert(arr[i]);                           //Aux space = O(n)
    */
    //More efficient solution
    unordered_set<int> s(arr,arr+n);
    return s.size();
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n ; i++)
        cin>>a[i];
    //  cout<<countdist(a,n);
    cout<<countdis(a,n);
    return 0;
}