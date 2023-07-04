// Size of binary tree

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

int get_size(node *root)
{
    /*
    if (root == NULL)
        return 0;                                               // Time complexity : O(n)
    return 1 + get_size(root->left) + get_size(root->right);    // Aux space : O(h)
    */
    if (root == NULL)
        return 0;
    queue<node *> q;
    q.push(root);
    int count = 0;
    while (q.empty() == false)
    {
        node *curr = q.front();                                 // Time complexity : O(n)
        q.pop();                                                // Aux space : O(w)
        count++;
        if (curr->left != NULL)
            q.push(curr->left);
        if (curr->right != NULL)
            q.push(curr->right);
    }
    return count;
}

int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->right->left = new node(40);
    root->right->right = new node(50);
    cout << get_size(root);
    return 0;
}