//Insert in BST

#include <bits/stdc++.h>
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

node* insert_BST(node *root,int val)
{
    if(root==NULL)
    {
        cout<<"\nValue added\n";
        return new node(val);
    }
    if(root->key==val)
    {
        cout<<"\nAlready in BST\n";
        return root;
    }
    if(root->key<val)
    {
        root->right=insert_BST(root->right,val);
        return root;
    }
    if(root->key>val)
    {
        root->left=insert_BST(root->left,val);
        return root;
    }

}

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
    node *root = new node(30);
    root->left = new node(10);
    root->right = new node(40);
    root->right->left = new node(35);
    root->right->right = new node(50);
    int val;
    cin >> val;
    root=insert_BST(root,val);
    cout<<'\n';
    inorder(root);
    return 0;
}