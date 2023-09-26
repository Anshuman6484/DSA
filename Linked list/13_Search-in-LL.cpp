// Search in a Linked List (iterative and recursive)

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

int SearchLL(node *head,int x)
{
    node *curr = head;
    int k=1;
    while(curr != NULL)
    {
        if(curr->data == x)
            return k;
        else
        {
            k++;
            curr = curr->next;
        }
    }

    return -1;
}

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

    int a;
    cin>>a;
    cout<<SearchLL(head,a);

    return 0;
}