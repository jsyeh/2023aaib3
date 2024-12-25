// �o�D�O²�檺 Tree Traversal ���X���D��
// �u�n�Q�Ρu�禡�I�s�禡�v���覡�A�t�X�e�������u�פ����v�K�৹��
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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans; // �ǳƦn�i�^�Ǫ���Ƶ��c
        if(root==nullptr) return ans; //�פ����A�^�ǪŪ� vector

        vector<int> left = inorderTraversal(root->left); //���b��
        vector<int> right = inorderTraversal(root->right); //�k�b��
        ans.insert(ans.end(), left.begin(), left.end() ); //����
        ans.push_back(root->val); //�A����
        ans.insert(ans.end(), right.begin(), right.end() ); //�A�k
        return ans;
    }
};
