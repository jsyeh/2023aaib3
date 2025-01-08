// week18-3.cpp 學習計畫 Math 倒數第3題
// LeetCode 67. Add Binary
class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0; //進位
        int i = a.length()-1, j = b.length()-1;
        vector<int> ans;
        while( i>=0 || j >=0 ) {
            if(j<0) { // 右邊不夠長, 只加左邊
                int now = a[i]-'0' + carry;
                ans.push_back( now % 2 );
                carry = now / 2;
            } else if(i<0) { // 左邊不夠長, 只加右邊
                int now = b[j]-'0' + carry;
                ans.push_back( now % 2 );
                carry = now / 2;
            } else { // 兩邊都夠長, 兩邊都加
                int now = a[i]-'0' + b[j]-'0' + carry;
                ans.push_back( now % 2 );
                carry = now / 2;
            }
            i--; // 換下一位
            j--; // 換下一位
        }
        if(carry>0) ans.push_back(carry); // 最高位, 有進位
        int N = ans.size();
        string ans2(N, '0'); //裡面都先放0的字串,長度是答案的長度
        for(int i=0; i<N; i++) {
            ans2[i] = ans[N-1-i] + '0';
        }
        return ans2;
    }
};
