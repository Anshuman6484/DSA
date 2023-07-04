//Check for BST

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
/*
bool isBST(node *root,int min,int max)
{
    if(root==NULL)
        return true;
    
    return (root->key>min && root->key<max && isBST(root->left,min,root->key) && isBST(root->right,root->key,max));
}
*/

int pre = INT_MIN;
bool isBST(node *root)
{
    if(root==NULL)
        return true;
    if(isBST(root->left)==false)
        return false;
    if(root->key<=pre)
        return false;
    pre = root->key;
    return isBST(root->right);
}

int main()
{
    return 0;
}