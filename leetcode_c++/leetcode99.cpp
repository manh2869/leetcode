#include <iostream>
#include <stack>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
void recoverTree(TreeNode *root)
{
    stack<TreeNode *> s;
    s.push(root);
    while (!s.empty())
    {
        TreeNode *t = s.top();
        s.pop();
        cout << t->val << endl;
        if (t->right)
            s.push(t->right);
        if (t->left)
            s.push(t->left);
    }
}
int main()
{
    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(1);
    root->right = new TreeNode(4);
    root->right->left = new TreeNode(2);
    recoverTree(root);
}