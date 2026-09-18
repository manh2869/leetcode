                                                    // use recursion

// #include <iostream>
// #include <stack>
// #include <vector>
// #include <algorithm>
// using namespace std;

// struct TreeNode
// {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
// };

// vector<int> preorderTraversal(TreeNode *root)
// {
//     vector<int> v;
//     if (root == nullptr)
//         return v;
//     stack<TreeNode *> s;
//     s.push(root);
//     while (!s.empty())
//     {
//         TreeNode *temp = s.top();
//         v.push_back(temp->val);
//         s.pop();
//         if (temp->right)
//         {
//             s.push(temp->right);
//         }
//         if (temp->left)
//         {
//             s.push(temp->left);
//         }
//     }
//     reverse(v.begin(), v.end());
//     return v;
// }
// int main()
// {
//     TreeNode root;
//     root.val = 1;
//     root.left = new TreeNode;
//     root.left->val = 2;
//     root.left->right = new TreeNode;
//     root.left->right->val = 3;
//     vector<int> v;
//     v = preorderTraversal(&root);
//     for (int x : v)
//         cout << x << endl;
// }