//Array implementation of stack in C++

#include<bits/stdc++.h>
using namespace std;

/*
struct mystack
{
    int *arr;
    int cap,top;
    mystack(int c)
    {
        cap=c;
        arr=new int [cap];
        top=-1;
    }
    void push(int x)
    {
        top++;
        arr[top]=x;
    }
    int pop()
    {
        int res=arr[top];
        top--;
        return res;
    }
    int peek()
    {
        return arr[top];
    }
    int size()
    {
        return (top+1);
    }
    bool isempty()
    {
        return (top==-1);
    }
};
*/

//Using vector

struct mystack
{
    vector<int> v;
    void push(int x)
    {
        v.push_back(x);
    }
    int pop()
    {
        int res = v.back();
        v.pop_back();
        return res;
    }
    int size()
    {
        return v.size();
    }
    bool isempty()
    {
        return v.empty();
    }
    int peek()
    {
        return v.back();
    }
};

int main()
{
    mystack s;
    s.push(5);
    s.push(10);
    s.push(20);
    cout<<s.pop()<<'\n';
    cout<<s.size()<<'\n';
    cout<<s.peek()<<'\n';
    cout<<s.isempty()<<'\n';
    return 0;
}