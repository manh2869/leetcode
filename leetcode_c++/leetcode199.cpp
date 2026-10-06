#include <iostream>
#include <queue>
#include <vector>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
vector<int> rightSideView(TreeNode *root)
{
    vector<int> v;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        int s = q.size();
        for (int i = 0; i < s; i++)
        {
            TreeNode *t = q.front();
            q.pop();
            if (i == s - 1)
            {
                v.push_back(t->val);
            }
            cout << t->val << endl;
            if (t->left)
                q.push(t->left);
            if (t->right)
                q.push(t->right);
        }
    }

    return v;
}
int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);

    root->left->left->left = new TreeNode(5);
    for (int x : rightSideView(root))
    {
        cout << x << endl;
    };
}