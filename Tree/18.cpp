// Maximum width of binary tree

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

int max_width(node *root)
{
    if (root == NULL)
        return 0;
    queue<node *> q;
    q.push(root);
    int res = 0;
    while (q.empty() == false)
    {
        int count = q.size();
        res=max(res,count);
        for (int i = 0; i < count; i++) // Time complexity : O(n)
        {                              // Aux space : theta(w)
            node *curr = q.front();
            q.pop();
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
    }
    return res;
}

int main()
{
    node *root = new node(100);
    root->left = new node(50);
    root->right = new node(50);
    root->left->left = new node(30);
    root->right->left = new node(30);
    root->right->right = new node(20);
    cout << max_width(root);
    return 0;
}