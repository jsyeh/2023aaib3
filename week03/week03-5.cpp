// LeetCode 459. Repeated Substring Pattern 字串是由重覆的字串組合起來的
class Solution { // week03-5.cpp 學習計畫第5題
public:
    // abcabcabc
    // abcabcabcabcabcabc
    //  bcabcabcabcabcab  找有沒有 abcabcabc
    bool repeatedSubstringPattern(string s) {
        //這題我沒什麼頭緒, 所以看了 Solutions 裡別人的解答。
        //很多人使用 s + s 再剪掉頭尾
        //然後把 s 拿去比對, 如果有出現,表示是 repeated 的 patern
        //我猜測它的原理, 是因為 s + s 再剪掉頭尾, 造成前半、後半,都無法與 s 比對成功
        //這時候, 如果還成功比對, 那一定是重覆pattern在中間疊起來了。
        //那會不會有反例呢? 不會有的。因為 s 很長, 如果能比到, 就把前半、後半都有照顧到
        string s2 = s + s;
        int N = s2.length();
        //cout << string::npos;
        return s2.substr(1, N-2).find(s) != string::npos; //npos對應:沒有這個位置、很大很大
    }   //substr()切字串 左扣1 右扣1 (本來是0...N-1 現在變成 1...N-2)
};