// Search in BST

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

bool search_BST(node *root, int val)
{
    if (root == NULL)
        return false;                                               //Time complexity : O(n) both

    if (root->key == val)                                           //Aux space : O(h){recursive},O(1){iterative}
        return true;

    if (root->key < val)
        return search_BST(root->right, val);
    else
        return search_BST(root->left, val);

    return false;
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
    if (search_BST(root, val))
        cout << "Found\n";
    else
        cout << "Not found\n";
    return 0;
}