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
bool isBalanced(TreeNode *root, int height)
{
    if (root == nullptr)
        return 0;
    isBalanced(root->left, height + 1);

    isBalanced(root->right, height + 1);
    return 0;
}
int main()
{
    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(1);
    root->right = new TreeNode(4);
    root->right->left = new TreeNode(2);
    root->right->right = new TreeNode(1);
    cout << isBalanced(root, 0) << endl;
}