//Insert at the end of a singly linked list

#include<bits/stdc++.h>
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

node *insertend(node *head,int x)
{
    node *temp = new node(x);
    if(head==NULL)
        return temp;
    node *curr = temp;
    while(curr->next!=NULL)
        curr=curr->next;
    curr->next = temp;
    return head;
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
    node *head = NULL;
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        head = insertend(head,x);
    }
    printlist(head);
    return 0;
}