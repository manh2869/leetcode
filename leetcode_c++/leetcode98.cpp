#include <iostream>
#include <vector>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(0), left(nullptr), right(nullptr) {}
};

bool isValidBST(TreeNode *root, int min, int max)
{
    if (root == nullptr)
        return 1;
    if (root->val <= min and root->val >= max)
        return 0;
    return isValidBST(root->left, min, root->val) and isValidBST(root->right, root->val, max);
}
void recoverTree(TreeNode* root) {
        
    }
int main()
{
    TreeNode *root = new TreeNode(5);

    root->left = new TreeNode(3);
    root->right = new TreeNode(7);

    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);

    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(8);
    cout << isValidBST(root, -1000000, 1000000) << endl;
}