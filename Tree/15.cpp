// Print left view of binary tree

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

void print_left_view(node *root)
{
    if (root == NULL)
        return;
    queue<node *> q;
    q.push(root);
    while (q.empty() == false)
    {
        int count = q.size();
        for (int i = 0; i < count; i++)                 // Time complexity : O(n)
        {                                               // Aux space : theta(w)
            node *curr = q.front();
            q.pop();
            if (i == 0)
                cout << curr->key << ' ';
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
    }
}

/*
int maxlevel=0;
void print_left_view(node *root,int level)
{
    if(root==NULL)
        return;
    if(maxlevel<level)
    {                                                           //Time complexity : O(n)
        cout<<root->key<<' ';                                   //Aux space : O(h)
        maxlevel=level;
    }
    print_left_view(root->left,level+1);
    print_left_view(root->right,level+1);
}
*/

int main()
{
    node *root = new node(10);
    root->left = new node(50);
    root->right = new node(60);
    root->right->left = new node(70);
    root->right->right = new node(20);
    root->right->left->right = new node(8);
    print_left_view(root);
    //print_left_view(root, 1);
    return 0;
}