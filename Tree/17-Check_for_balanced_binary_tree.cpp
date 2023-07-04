//Check for balanced binary tree

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
int height(node *root)
{
    if(root==NULL)                                               //Time complexity : O(n)
        return 0;                                                //Aux space : O(h)
    else
        return max(height(root->left),height(root->right))+1;
}

bool isbalanced(node *root)
{
    if(root==NULL)
        return true;                                        //TIme complexity : O(n^2)
    int lh=height(root->left);
    int rh=height(root->right);

    return (abs(lh-rh)<=1 && isbalanced(root->left) && isbalanced(root->right));
}
*/

int isbalanced(node *root)
{
    if(root==NULL)
        return 0;
    int lh=isbalanced(root->left);                          //Time complexity: O(n)
    if(lh==-1)
        return -1;
    int rh=isbalanced(root->right);
    if(rh==-1)
        return -1;
    if(abs(lh-rh)>1)
        return -1;
    else
        return max(lh,rh)+1;
}

int main()
{
    node *root = new node(100);
    root->left = new node(50);
    root->right = new node(50);
    root->right->left = new node(30);
    root->right->right = new node(20);
    //root->right->right->right = new node(20);
    if(isbalanced(root)!=-1)
        cout<<"YES\n"<<"Height of tree : "<<isbalanced(root);
    else    
        cout<<"NO\n";
    return 0;
}