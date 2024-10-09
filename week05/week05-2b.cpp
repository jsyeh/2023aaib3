// week05-2.cpp LeetCode 709. To Lower Case
class Solution {
public:
    string toLowerCase(string s) {
        string ans;
        for(char c : s){
            ans += tolower(c);
        }
        return ans;
    }
};