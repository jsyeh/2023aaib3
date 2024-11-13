// week10-5.cpp 學習計畫 Math 第4題
// LeetCode 976. Largest Perimeter Triangle
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // 小到大排好!
        int N = nums.size();
        for(int i=0; i<N-2; i++) { // 利用 nums[N-1-i] 從大到小, 倒過來挑數字
            int big = nums[N-1-i], middle = nums[N-2-i], small = nums[N-3-i];
            if(middle+small > big) return big+middle+small; // 找到囉!
        }
        return 0; // 找不到的話, 就回傳 0
    } // 1, 1, 1, 1, 1, 2, 2, 100
};
