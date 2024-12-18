// week15-5.cpp 學習計畫(隱藏) Binary Tree 第2題
// LeetCode 111. Minimum Depth of Binary Tree
// 與上週的第1題不同, 因為「葉子」是有2個小腳腳
class Solution {
public:
    int helper(TreeNode* root) {
        if(root == nullptr) return INT_MAX;
        if(root->left==nullptr && root->right==nullptr) return 1; // 葉子
        //「葉子」是有2個小腳腳  (以上2行, 是終止條件 terminal condition)
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
