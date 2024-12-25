// week16-1b.cpp 學習計畫 Math 最後1題
// LeetCode 50. Pow(x, n)
class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        if(n>0){ // 用瘋狂程設的寫法, 但是 n<0 會失敗
            for(int i=0; i<n; i++){
                ans *= x;
            }
        }else if(n<0){ // 特別針對 n<0 用 負負得正, 換成倒過來的型式
            for(int i=0; i<-n; i++){
                ans *= 1/x;
            }
        }
        return ans;
    }
};
