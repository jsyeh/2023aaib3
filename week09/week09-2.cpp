// week09-2.cpp 學習計畫 Math 第1題
// LeetCode 1523. Count Odd Numbers in an Interval Range
// 找 low...high 中間, 有幾個奇數 (頭尾有包含)
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = (high-low) /2; // 這個方法是錯!
        if(low%2==1 || high%2==1) ans++; //頭尾有奇數,就要+1
        // 不知道為什麼, 交給大家想想看
        return ans; // 先不要送出, 我們在 Testcase 測資,多試幾個
    }
};
