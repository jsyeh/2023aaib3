// week16-7.cpp 每日挑戰題 LeetCode 515. Find Largest Value in Each Tree Row
// 找到樹的每一層的最大值
class Solution {
public:
    void helper(TreeNode* root, int level, vector<int>& ans) {
        if(root==nullptr) return;
        if(ans.size() <= level) ans.push_back(root->val); // 層數格子不夠,就加1格
        else if(root->val > ans[level] ) ans[level] = root->val; // 如果數字更大,就更新

        helper(root->left, level+1, ans); // 左半邊 (下一層level+1)
        helper(root->right, level+1, ans); // 右半邊 (下一層level+1)
    }
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;
        helper(root, 0, ans);
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
