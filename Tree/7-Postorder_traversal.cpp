//Implementation of postorder traversal

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

void postorder(node *root)
{
    if(root->left != NULL)
        postorder(root->left);                              //Time complexity : O(n)
    if(root->right != NULL)                                 //Aux space : O(h)
        postorder(root->right);
    cout<<root->key<<'\n';
}

int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->right->left = new node(40);
    root->right->right = new node(50);
    postorder(root);
    return 0;
}