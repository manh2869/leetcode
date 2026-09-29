#include <iostream>
#include <stack>
#include <vector>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int dfs(TreeNode *root)
{
    if (root == nullptr)
        return 0;
    int l = dfs(root->left);
    if (l == -1)
        return -1;
    int r = dfs(root->right);
    if (r == -1)
        return -1;
    if (abs(l - r) > 1)
        return -1;
    return max(l, r) + 1;
}
bool isBalanced(TreeNode *root)
{
    return dfs(root) != -1;
}
int main()
{
    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(1);
    root->right = new TreeNode(4);
    root->right->left = new TreeNode(2);
    root->right->right = new TreeNode(1);
    cout << isBalanced(root) << endl;
}