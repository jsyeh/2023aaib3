// week08-1.c 學習計畫 matrix 的第1題
// LeetCode 1672. Richest Customer Wealth
//最多錢的有錢人, 有「多少錢」?
int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int ans = 0;
    for(int i=0; i<accountsSize; i++) {
        int sum = 0;
        for(int j=0; j<accountsColSize[i]; j++) {
            sum += accounts[i][j];
        }
        if(sum>ans) ans = sum;
    }
    return ans;
}
