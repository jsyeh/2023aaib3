// week08-2a.cpp �ǲ߭p�e matrix ��2�D
// LeetCode 1572. Matrix Diagonal Sum �﨤�u���Ʀr�[�_��
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans = 0;
        int N = mat.size();
        for(int i=0; i<N; i++){
            ans += mat[i][i]; //���W�k�U, i ��, i ��
            ans += mat[i][N-1-i]; //���U�k�W i ��, N-1-i �˹L�Ӫ�
        }
        if(N%2==1) ans -= mat[N/2][N/2]; //�_��: �����������ƥΤF2��,�n����
        return ans;
    }
};
