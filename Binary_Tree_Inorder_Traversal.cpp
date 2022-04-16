class Solution
{
public:
    void solve(vector<int> &ans, TreeNode *root)
    {
        TreeNode *temp = root;
        if (temp == NULL)
            return;
        solve(ans, root->left);   // left
        ans.push_back(temp->val); // push
        solve(ans, root->right);  // right
    }

    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> ans;
        solve(ans, root);
        return ans;
    }
};