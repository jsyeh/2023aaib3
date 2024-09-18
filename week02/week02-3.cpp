// LeetCode 1768. Merge Strings Alternately (Easy)
// 交錯將 word1 和 word2 放到 ans 裡 (學習計畫第1題) week02-3.cpp
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans; // 準備好答案
        for(int i=0; i<word1.length() || i<word2.length(); i++){
            if(i<word1.length()) ans += word1[i];
            if(i<word2.length()) ans += word2[i];
        }
        return ans; // 答案送出去
    }
};