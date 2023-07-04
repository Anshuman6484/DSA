//Reversing a queue

#include<bits/stdc++.h>
using namespace std;

void reverse(queue<int> &q)
{
    stack<int> s;
    while(q.empty()==false)
    {
        s.push(q.front());
        q.pop();
    }
    while(s.empty()==false)
    {
        q.push(s.top());
        s.pop();
    }
}

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    reverse(q);
    while(q.empty()==false)
    {
        cout<<q.front()<<'\t';
        q.pop();
    }
    return 0;
}