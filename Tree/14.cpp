// Maximum in binary tree

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

int get_max(node *root)
{
    /*
    if (root == NULL)
        return INT-MIN;                                                     //Time complexity : O(n)
    return max(root->key,max(get_max(root->left),get_max(root->right)));    //Aux space : O(h)
    */
    if (root == NULL)
        return INT_MIN;
    queue<node *> q;
    q.push(root);
    int count = INT_MIN;
    while (q.empty() == false)
    {
        node *curr = q.front();
        q.pop();
        count = max(count, curr->key);                                      //Time complexity : O(n)
        if (curr->left != NULL)                                             //Aux space : O(w)
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
    cout << get_max(root);
    return 0;
}