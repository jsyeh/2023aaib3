// week15-5.cpp �ǲ߭p�e(����) Binary Tree ��2�D
// LeetCode 111. Minimum Depth of Binary Tree
// �P�W�g����1�D���P, �]���u���l�v�O��2�Ӥp�}�}
class Solution {
public:
    int helper(TreeNode* root) {
        if(root == nullptr) return INT_MAX;
        if(root->left==nullptr && root->right==nullptr) return 1; // ���l
        //�u���l�v�O��2�Ӥp�}�}  (�H�W2��, �O�פ���� terminal condition)
        int ans1 = helper(root -> left);
        int ans2 = helper(root -> right);
        return min(ans1, ans2) + 1;
    }
    int minDepth(TreeNode* root) {
        int ans = helper(root);
        if(ans==INT_MAX) return 0;
        return ans;
    }
};
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
