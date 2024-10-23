// week07-4b.cpp 二合一的第2題(學習計畫Simulation第4題)
// LeetCode 1041. Robot Bounded In Circle
class Solution {
public:
    bool isRobotBounded(string instructions) {
        int dx[4] = {1, 0, -1, 0}; //移動的方向
        int dy[4] = {0, 1, 0, -1};
        int x = 0, y = 0, dir=0; //dir方向direction: 0:右 1:下 2:左 3:右
        for(char c : instructions) {
            if(c=='G'){
                x += dx[dir];
                y += dy[dir];
            }
            if(c=='L') dir = (dir+3) % 4; //往左轉-1, 但會有負的,再+4再%4取餘數。變+3
            if(c=='R') dir = (dir+1) % 4; //往右轉+1, 0變1變2變3變0變1變2變3變0...
        }

        if(x==0 && y==0) return true; //留在原地
        else if(dir==0) return false; //不在原地,且向在原來的方向,就會越走越遠
        else return true; //方向有改, 就一定會繞圈圈
    }
};
