// week08-1.c �ǲ߭p�e matrix ����1�D
// LeetCode 1672. Richest Customer Wealth
//�̦h���������H, ���u�h�ֿ��v?
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
