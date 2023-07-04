//Traversing a singly linked list

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

/*
void printlist(node *head)
{

    while(head!=NULL)
    {
        cout<<head->data<<'\t';
        head = head->next;
    }
}
*/


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
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    printlist(head);
    return 0;
}