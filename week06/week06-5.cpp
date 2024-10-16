// week06-5.cpp LeetCode 1078. Occurrences After Bigram
// 找到第1個字、接著找到第2個字，再來就是我們要的第3個字
class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> ans; // 放答案 (伸縮自如的陣列), 形狀 要 return 一樣

        stringstream ss(text); // 把 string 轉成像 cin cout 的 stream

        string word1, word2, word3; // 第1、第2、第3個字
        ss >> word1; // 像 cin >> word1 的方法, 讀到資料
        ss >> word2;
        while(ss >> word3){
            if(word1==first && word2==second) ans.push_back(word3); // 放答案
            word1 = word2;
            word2 = word3;
        }

        return ans;
    }
};
