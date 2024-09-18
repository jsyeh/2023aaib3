// LeetCode 242. Valid Anagram (Easy)
// 同樣的字母 組成的字 (學習計畫第4題) week02-5.cpp
class Solution {
public:
    bool isAnagram(string s, string t) {
        int H1[256] = {}, H2[256] = {}; //都是0
        for(char c : s){
            H1[c]++;
        }
        for(char c : t){
            H2[c]++;
        }

        for(int i=0; i<256; i++){ //整個陣列,逐一檢查
            if(H1[i] != H2[i]) return false;
        } //如果左邊、右邊的出現次數不同, 就失敗
        //如果前面都沒失敗, 那很好啊
        return true; //就是成功了
    }
};