//Two stacks in an array

#include<bits/stdc++.h>
using namespace std;

struct twostacks
{
    int *arr,cap,top1,top2;
    twostacks(int n)
    {
        cap=n;
        top1=-1;
        top2=cap;
        arr=new int[n];
    }
    void push1(int x)
    {
        if(top1<top2-1)
        {
            top1++;
            arr[top1]==x;
        }
    }
    void push2(int x)
    {
        if(top1<top2-1)
        {
            top2--;
            arr[top2]==x;
        }
    }
    int pop1()
    {
        if(top1>=0)
        {
            int x=arr[top1];
            top1--;
            return x;
        }
        else
            exit(1);
    }
    int pop2()
    {
        if(top2<=cap-1)
        {
            int x=arr[top2];
            top2++;
            return x;
        }
        else
            exit(1);
    }
};

int main()
{
    int n;
    cin>>n;
    twostacks a(n);
    int x;
    cin>>x;
    a.push1(x);
    cin>>x;
    a.push2(x);
    cin>>x;
    a.push1(x);
    cin>>x;
    a.push1(x);
    cin>>x;
    a.push2(x);

    cout<<a.pop1()<<'\t'<<a.pop2()<<'\t'<<a.pop1()<<'\t'<<a.pop1()<<'\t'<<a.pop2()<<'\t';

    return 0;
}