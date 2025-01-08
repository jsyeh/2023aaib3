// week18-1.cpp 二合一
// LeetCode 896. Monotonic Array
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int up = 0, down = 0;
        for(int i=0; i<nums.size()-1; i++) {
            int d = nums[i+1] - nums[i];
            if(d>0) up = 1; // 上升
            if(d<0) down = 1; // 下降
        }
        if(up==1 && down==1) return false; // 有上有下,失敗
        else return true;
    }
};
