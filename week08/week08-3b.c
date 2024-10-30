// week08-3b.c �ǲ߭p�e matrix ��4�D
// LeetCode 73. Set Matrix Zeroes
// ��ı�g�X�Ӫ����סu�O�����v,�]��0��������,�ܤӦh0�F
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int M = matrix.size(), N = matrix[0].size();
        vector<int> up(N); //�ŧi�@�Ӱ}�C, �O��b�W��up�B�Ψӡu���Ĥġv�Ъ`�u�����X�����n�R�v
        vector<int> left(M); //�ŧi�@�Ӱ}�C, �O��b����left�B�Ψӡu���Ĥġv�Ъ`�u�����X����n�R�v
        for(int i=0; i<M; i++){
            for(int j=0; j<N; j++){
                if(matrix[i][j]==0){ //�J��0����, �n�Ъ` left[i] �M up[j]
                    up[j] = 1;
                    left[i] = 1;
                }
            }
        }
        for(int i=0; i<M; i++){ //�̫�A�⥦�ܦ�0
            if(left[i]==1) for(int jj=0; jj<N; jj++) matrix[i][jj]=0; //�p�G���䦳�u���Ĥġv,�N����R ���
        }
        for(int j=0; j<N; j++){
            if(up[j]==1) for(int ii=0; ii<M; ii++) matrix[ii][j]=0; //�p�G�W�����u���Ĥġv,�N����R ����
        }
    }
};
