// week09-1b.cpp 學習計畫 Matrix 第3題  還沒寫完
// LeetCode 54. Spiral Matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size();
        int N = matrix[0].size();
        int i = 0, j = 0, dir = 0; // 0右、1下、2左、3上
        int dI[4] = {0, 1, 0, -1}; // 移動的值
        int dJ[4] = {1, 0, -1, 0}; // 移動的值
        vector<int> ans;
        for(int k=0; k<N-1; k++){
            ans.push_back( matrix[i][j] ); //把答案放入ans
            i += dI[dir]; // 移動的值
            j += dJ[dir]; // 移動的值
        }
        dir = (dir+1) % 4;
        for(int kk=1; kk<=M+1; kk++){
            for(int k=0; k<M-kk; k++){
                ans.push_back( matrix[i][j] ); //把答案放入ans
                i += dI[dir]; // 移動的值
                j += dJ[dir]; // 移動的值
            }
            dir = (dir+1) % 4;
            for(int k=0; k<N-kk; k++){
                ans.push_back( matrix[i][j] ); //把答案放入ans
                i += dI[dir]; // 移動的值
                j += dJ[dir]; // 移動的值
            }
            dir = (dir+1) % 4;
        }
        return ans; //請把上週的最後作業的圖, 拿回來看(復習一下)
    } //還差一點點哦
};
