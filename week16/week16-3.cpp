// week16-3.cpp �ǲ߭p�e Binary Tree ���ê���3�D
// LeetCode 94. Binary Tree Inorder Traversal
class Solution {
public:
    void helper(TreeNode* root, vector<int>& ans) { // �禡�I�s�禡
        if(root==nullptr) return; // �פ����B�������� terminal condition

        helper(root->left, ans); // ���b��
        ans.push_back(root->val); // ��b����
        helper(root->right, ans); // �k�b��
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans; // �ǳ� ans ���� (���Y�ۦp���}�C)
        helper(root, ans); // �禡�I�s�禡 ���ڭ̧⵪�׺�X��,��Jans
        return ans; // ans ���ץ�X�h
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
