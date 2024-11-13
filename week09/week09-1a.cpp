// week09-1a.cpp �ǲ߭p�e Matrix ��3�D �٨S�g��
// LeetCode 54. Spiral Matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size();
        int N = matrix[0].size();
        int i = 0, j = 0, dir = 0; // 0�k�B1�U�B2���B3�W
        int dI[4] = {0, 1, 0, -1}; // ���ʪ���
        int dJ[4] = {1, 0, -1, 0}; // ���ʪ���

        vector<int> ans;
        ans.push_back( matrix[i][j] ); //�⵪�ש�Jans
        i += dI[dir]; // ���ʪ���
        j += dJ[dir]; // ���ʪ���
        ans.push_back( matrix[i][j] ); //�⵪�ש�Jans
        i += dI[dir]; // ���ʪ���
        j += dJ[dir]; // ���ʪ���
        ans.push_back( matrix[i][j] ); //�⵪�ש�Jans
        //�o�ӵ{��, ���|���V
        return ans; //�Ч�W�g���̫�@�~����, ���^�Ӭ�(�_�ߤ@�U)
    }
};