
void recoverTree(TreeNode *root)
{
    vector<int> v;
    stack<TreeNode *> s;
    // s.push(root);
    TreeNode *cur = root;
    while (cur != nullptr || !s.empty())
    {
        while (cur != nullptr)
        {
            s.push(cur);
            cur = cur->left;
        }

        cur = s.top();
        s.pop();
        // cout << cur->val << endl;
        v.push_back(cur->val);
        cur = cur->right;
    }
    int a;
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] > v[i + 1])
            a = v[i + 1];
        {
            break;
        }
    }
    int i = 0;
    while (a > v[i])
    {
        i++;
    }
}
