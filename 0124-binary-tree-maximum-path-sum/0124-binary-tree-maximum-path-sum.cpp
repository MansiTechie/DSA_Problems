/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans=INT_MIN;
    int dfs(TreeNode* r) {
        if(!r) return 0;
        int l=max(0,dfs(r->left)), h=max(0,dfs(r->right));
        ans=max(ans,r->val+l+h);
        return r->val+max(l,h);
    }
    int maxPathSum(TreeNode* root) {
        dfs(root);
        return ans;
    }
};