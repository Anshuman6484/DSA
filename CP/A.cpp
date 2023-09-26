#include <bits/stdc++.h>
using namespace std;

int moves(int a,int b,int c)
{
    int res = 0;
    if(a==b)
        return 0;
    
    if(abs(a-b)<c)
        return 1;

    res = abs(a-b)/(2*c);
    if(a>b){
        a-=(res*c);
        b+=(res*c);
    }
    else{
        b-=(res*c);
        a+=(res*c);
    }
    if(a==b)
        return res;
    else
        return res+1;

}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        cout<<moves(a,b,c)<<endl;
    }
    return 0;
}