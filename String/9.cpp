//Reverse words in a string

#include<bits/stdc++.h>
using namespace std;

void reverse(string &str,int low, int high)
{
    while(low<=high)
    {
        swap(str[low],str[high]);
        low++;
        high--;
    }
}

void reversewords(string &str,int n)
{
    int start = 0;
    for(int end=0 ; end<n ; end++)
    {
        if(str[end]==' ')
        {
            reverse(str,start,end-1);
            start = end+1;
        }
    }
    reverse(str,start,n-1);
    reverse(str,0,n-1);
}

int main()
{
    string s;
    getline(cin,s);
    reversewords(s,s.length());
    cout<<s;
    return 0;
}