// Stock span problem

#include <bits/stdc++.h>
using namespace std;

/*  //Naive solution
void print_span(int a[],int n)
{
    for(int i=0 ; i<n ; i++)
    {
        int span =1;
        for(int j=i-1 ; j>=0 && a[j]<=a[i] ; j--)
            span++;
        cout<<span<<'\t';
    }
}
*/

void print_span(int a[], int n)
{
    stack<int> s;
    s.push(0);
    cout << 1 << '\t';

    for (int i = 1; i < n; i++)
    {
        while (s.empty() == false && a[s.top()] <= a[i])
            s.pop();

        int span = s.empty() ? i + 1 : i - s.top();
        cout << span << '\t';
        s.push(i);  
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    print_span(a, n);
    return 0;
}