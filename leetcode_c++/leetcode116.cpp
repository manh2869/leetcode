#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node *next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}
};
Node *connect(Node *root)
{
    queue<Node *> q;

    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        cout << temp->val << endl;
        if (temp->left)
        {
            q.push(temp->left);
            temp->next = q.front();
        }
        if (temp->right)
        {
            q.push(temp->right);
            temp->next = q.front();
        }
    }

    return root;
}
int main()
{
    Node *root = new Node();
    root->val = 1;

    root->left = new Node();
    root->left->val = 2;

    root->right = new Node();
    root->right->val = 3;

    root->left->left = new Node();
    root->left->left->val = 4;

    root->left->right = new Node();
    root->left->right->val = 5;

    root->right->left = new Node();
    root->right->left->val = 6;

    root->right->right = new Node();
    root->right->right->val = 7;
    connect(root);
}