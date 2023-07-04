//Insert at the beginning of singly linked list

#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};

node *insertbegin(node *head,int x)
{
    node *temp = new node(x);
    temp->next = head;
    return temp;
}

void printlist(node *head)
{
    node *curr = head;
    while(curr!=NULL)
    {
        cout<<curr->data<<'\t';
        curr = curr->next;
    }
}

int main()
{
    int n;
    cin>>n;
    node *head = NULL;
    while(n--)
    {
        int x;
        cin>>x;
        head = insertbegin(head,x);
    }    
    printlist(head);
    return 0;
}