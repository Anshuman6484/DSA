//Print nodes at K distance

#include<bits/stdc++.h>
using namespace std;

struct node
{
    int key;
    node *left;
    node *right;
    node(int k)
    {
        key = k;
        left = NULL;
        right = NULL;
    }
};

void print_K(node *root,int k)
{
    if(root==NULL)
        return;
    if(k==0)
    {
        cout<<root->key<<'\n';                          //Time complexity : O(n)
        return;                                         //Aux space : O(h)
    }
    print_K(root->left,k-1);
    print_K(root->right,k-1);
}

int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->left->left = new node(40);
    root->left->right = new node(50);
    root->right = new node(30);
    root->right->right = new node(70);
    print_K(root,2);
    return 0;
}