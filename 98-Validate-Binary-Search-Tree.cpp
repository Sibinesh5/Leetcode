/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    long long x = 1, res = INT_MIN;
    bool isValidBST(TreeNode* root) {
        ios_base::sync_with_stdio(false);
        if (root) {
            isValidBST(root->left);
            if (res >= root->val) {
                x = 0;
                return 0;
            } else
                res = root->val;
            isValidBST(root->right);
        }
        return x;
    }
};