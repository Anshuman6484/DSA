//Level order traversal

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

void printlevel(node *root)
{
    if(root==NULL)
        return;
    queue<node*> q;
    q.push(root);
    while(q.empty()==false)
    {
        node *curr=q.front();               //Time complexity : theta(n)
        q.pop();                            //Aux space : theta(w)  , w=width of tree
        cout<<curr->key<<' ';
        if(curr->left!=NULL)
            q.push(curr->left);
        if(curr->right!=NULL)
            q.push(curr->right);
    }
}

int main()
{
    return 0;
}






