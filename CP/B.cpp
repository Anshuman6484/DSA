#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<pair<int, int> > v;
        for(int i=0; i<n; i++)
        {
            int a,b;
            cin>>a>>b;
            v.push_back(pair<int, int>(a,b));
        }
        
        int res=INT_MAX;
        for(int i=0; i<n; i++)
        {
            if(v[i].second%2==0)
                res=min(res,((v[i].second/2)-1)+v[i].first);
            else
                res=min(res,(v[i].second/2)+v[i].first);
        }
        cout<<res<<endl;
    }
    return 0;
}