// Children sum property

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

bool isCSum (node *root)
{
    if(root==NULL)
        return true;
    if(root->left==NULL && root->right==NULL)                               //Time complexity : O(n)
        return true;                                                        //Aux space : O(h)        

    int sum=0;
    if(root->left!=NULL)
        sum+=root->left->key;
    if(root->right!=NULL)
        sum+=root->right->key;
    
    return (root->key==sum && isCSum(root->left) && isCSum(root->right));
}

int main()
{
    node *root = new node(100);
    root->left = new node(50);
    root->right = new node(50);
    root->right->left = new node(30);
    root->right->right = new node(20);
    root->right->left->right = new node(30);
    if(isCSum(root))
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}