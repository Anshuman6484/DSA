//Implementation of inorder traversal

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

void inorder(node *root)
{
    if(root != NULL)
    {
        inorder(root->left);                            //Time complexity : O(n)
        cout<<root->key<<'\n';                          //Aux space : O(h)
        inorder(root->right);
    }
}

int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->right->left = new node(40);
    root->right->right = new node(50);
    inorder(root);
    return 0;
}