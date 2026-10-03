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
// int sumNumbers(TreeNode *root)
// {
//     int sum = 0;
//     stack<TreeNode *> s;
//     s.push(root);
//     while (!s.empty())
//     {
//         TreeNode *temp = s.top();
//         s.pop();
//         cout << temp->val << endl;
//         if (temp->left == nullptr && temp->right == nullptr)
//             sum += temp->val;
//         if (temp->right)
//         {
//             s.push(temp->right);
//             sum += temp->val;
//         }
//         if (temp->left)
//         {
//             s.push(temp->left);
//             sum += temp->val;
//         }
//     }
//     return sum;
// }

int sumNumbers(TreeNode *root, int sum)
{
    if (root == nullptr)
        return 0;
    sum = sum * 10 + root->val;
    if (root->left == nullptr && root->right == nullptr)
        return sum;
    int l = sumNumbers(root->left, sum);
    int r = sumNumbers(root->right, sum);
    return l + r;
}
int main()
{
    TreeNode *root = new TreeNode(4);

    root->left = new TreeNode(9);
    root->right = new TreeNode(0);

    root->left->left = new TreeNode(5);
    root->left->right = new TreeNode(1);
    cout << sumNumbers(root, 0) << endl;
}