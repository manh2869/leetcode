#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(NULL), right(NULL) {}
};

vector<int> largestValues(TreeNode *root)
{
    vector<int> v;
    vector<int> t;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        int n = q.size();
        TreeNode *prev = NULL;
        for (int i = 0; i < n; i++)
        {
            TreeNode *temp = q.front();

            q.pop();
            t.push_back(temp->val);

            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
                        }
        }
        int maxValue = *max_element(t.begin(), t.end());
        t.clear();
        v.push_back(maxValue);
    }

    return v;
}
int main()
{
    TreeNode *root = new TreeNode();
    root->val = 1;

    root->left = new TreeNode();
    root->left->val = 3;

    root->right = new TreeNode();
    root->right->val = 2;

    root->left->left = new TreeNode();
    root->left->left->val = 5;

    root->left->right = new TreeNode();
    root->left->right->val = 3;

    root->right->left = NULL;

    root->right->right = new TreeNode();
    root->right->right->val = 9;
    vector<int> v = largestValues(root);
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << endl;
}
