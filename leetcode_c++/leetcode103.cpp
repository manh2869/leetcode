#include <iostream>
#include <vector>
#include <queue>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

vector<vector<int>> zigzagLevelOrder(TreeNode *root)
{
    queue<TreeNode *> q;
    q.push(root);
    vector<vector<int>> t;
    while (!q.empty())
    {
        int n = q.size();
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            TreeNode *temp = q.front();
            q.pop();
            cout << temp->val << endl;
            if (i % 2 == 0)
            {
                if (temp->left)
                {
                    q.push(temp->left);
                    v.push_back(temp->val);
                }
                if (temp->right)
                {
                    q.push(temp->right);
                    v.push_back(temp->val);
                }
            }
            else
            {
                if (temp->right)
                {
                    q.push(temp->right);
                    v.push_back(temp->val);
                }
                if (temp->left)
                {
                    q.push(temp->left);
                    v.push_back(temp->val);
                }
            }
        }
        t.push_back(v);
    }
    return t;
}


// this absolute wroong
int main()
{
    TreeNode *root = new TreeNode(3);

    root->left = new TreeNode(9);
    root->right = new TreeNode(20);

    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    zigzagLevelOrder(root);
}