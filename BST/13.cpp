// Floor in BST

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

int floor_BST(node *root, int val)
{
    int res = -1;
    while (root != NULL)
    {
        if (root->key == val)
            return root->key;
        if (root->key < val)
        {
            res = max(res, root->key);
            root = root->right;
        }
        if (root->key > val)
            root = root->left;
    }
    return res;
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
    cout << floor_BST(root, val);
    return 0;
}