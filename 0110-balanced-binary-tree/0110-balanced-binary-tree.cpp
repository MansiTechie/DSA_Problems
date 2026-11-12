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
    int depth(TreeNode* r) {
        if(!r) return 0;
        int l=depth(r->left), h=depth(r->right);
        if(l==-1 || h==-1 || abs(l-h)>1) return -1;
        return 1+max(l,h);
    }

    bool isBalanced(TreeNode* root) {
        return depth(root)!=-1;
    }
};