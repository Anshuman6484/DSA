// Level order traversal line by line

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

void print_level_order_line(node *root)
{
    /*
    if(root==NULL)
        return;
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(q.size()>1)
    {
        node *curr=q.front();
        q.pop();
        if(curr==NULL)
        {
            cout<<'\n';
            q.push(NULL);
            continue;
        }
        cout<<curr->key<<' ';

        if(curr->left!=NULL)
            q.push(curr->left);
        if(curr->right!=NULL)
            q.push(curr->right);
    }
    */
    if (root == NULL)
        return;
    queue<node *> q;
    q.push(root);
    while (q.empty() == false)
    {
        int count = q.size();
        for (int i = 0; i < count; i++)                     //Time complexity : O(n)
        {                                                   //Aux space : theta(w)
            node *curr = q.front();
            q.pop();
            cout << curr->key << ' ';
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
        cout << '\n';
    }
}

int main()
{
    return 0;
}