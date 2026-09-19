#include <iostream>
#include <algorithm>
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
int minDepth(TreeNode *root)
{
    if (root == nullptr)
        return 0;
    if (root->left == nullptr)
        return 1 + minDepth(root->right);

    if (root->right == nullptr)
}
//         return 1 + minDepth(root->left);
//     return min(minDepth(root->left), minDepth(root->right)) + 1;
// }
// int main(){
//     minDepth()
// }