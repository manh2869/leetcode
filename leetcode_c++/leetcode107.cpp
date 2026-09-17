#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode()
    {
        val = 0;
        left = nullptr;
        right = nullptr;
    }
};

vector<vector<int>> levelOrderBottom(TreeNode *root)
{
    vector<vector<int>> v;
    queue<TreeNode *> q;
    q.push(root);
    while (q.size() != 0)
    {
        vector<int> t;
        int n = q.size();

        for (int i = 0; i < n; i++)
        {
            TreeNode *temp = q.front();
            q.pop();
            t.push_back(temp->val);
            if (temp->left != nullptr)
            {
                q.push(temp->left);
            }
            if (temp->right != nullptr)
            {
                q.push(temp->right);
            }
        }
        v.push_back(t);
    }
    return v;
};
int main()
{

    TreeNode root;
    root.val = 3;
    root.left = new TreeNode;
    root.left->val = 9;
    root.right = new TreeNode;
    root.right->val = 20;
    root.right->left = new TreeNode();
    root.right->left->val = 15;
    root.right->right = new TreeNode();
    root.right->right->val = 7;
    vector<vector<int>> t;
    t = levelOrderBottom(&root);
    reverse(t.begin(), t.end());
    for (vector<int> s : t)
    {
        for (int x : s)
        {
            cout << x << endl;
        }
    }
}