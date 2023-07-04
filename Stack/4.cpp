//Linked list implementation of stack

#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};

struct mystack
{
    node *head;
    int sz;
    mystack()
    {
        head = NULL;
        sz = 0;
    }
    void push(int x)
    {
        node *temp = new node(x);
        temp->next = head;
        head = temp;
        sz++;
    }
    int pop()                                       //Time complexity of all funcs is O(1)
    {
        if(head==NULL)
            return INT_MAX;

        int res = head->data;
        node *temp = head;
        head = head->next;
        delete(temp);
        sz--;
        return res;
    }
    int size()
    {
        return sz;
    }
    bool isempty()
    {
        return (head==NULL);
    }
    int peek()
    {
        if(head==NULL);
            return INT_MAX;
        return head->data;
    }
};

int main()
{
    
    return 0;
}