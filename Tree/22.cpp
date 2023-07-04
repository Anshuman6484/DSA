//Diameter of a binary tree

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

int res=0;
int diameter_tree(node *root)
{
    if(root==NULL)
        return 0;
    int lh=diameter_tree(root->left);
    int rh=diameter_tree(root->right);
    res=max(res,1+lh+rh);

    return 1+max(lh,rh);
}

int main()
{
    node *root=new node(10);
    root->left=new node(20);
    root->right=new node(60);
    root->left->left=new node(30);
    root->left->right=new node(80);
    root->left->right->right=new node(90);
    root->left->right->right->right=new node(18);
    root->left->left->left=new node(40);
    root->left->left->right=new node(50);
    int height=diameter_tree(root);
    cout<<res;
    return 0;
}