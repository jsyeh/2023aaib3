// week07-4b.cpp �G�X�@����2�D(�ǲ߭p�eSimulation��4�D)
// LeetCode 1041. Robot Bounded In Circle
class Solution {
public:
    bool isRobotBounded(string instructions) {
        int dx[4] = {1, 0, -1, 0}; //���ʪ���V
        int dy[4] = {0, 1, 0, -1};
        int x = 0, y = 0, dir=0; //dir��Vdirection: 0:�k 1:�U 2:�� 3:�k
        for(char c : instructions) {
            if(c=='G'){
                x += dx[dir];
                y += dy[dir];
            }
            if(c=='L') dir = (dir+3) % 4; //������-1, ���|���t��,�A+4�A%4���l�ơC��+3
            if(c=='R') dir = (dir+1) % 4; //���k��+1, 0��1��2��3��0��1��2��3��0...
        }

        if(x==0 && y==0) return true; //�d�b��a
        else if(dir==0) return false; //���b��a,�B�V�b��Ӫ���V,�N�|�V���V��
        else return true; //��V����, �N�@�w�|¶���
    }
};
