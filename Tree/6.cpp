//Implementation of preorder traversal

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

void preorder(node *root)
{
    /*
    cout<<root->key<<'\n';
    if(root->left != NULL)
        preorder(root->left);
    if(root->right != NULL)
        preorder(root->right);
    */
    if(root != NULL)
    {
        cout<<root->key<<'\n';                          //Time complexity : O(n)
        preorder(root->left);                           //Aux space : O(h)
        preorder(root->right);
    }
}

int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->right->left = new node(40);
    root->right->right = new node(50);
    preorder(root);
    return 0;
}