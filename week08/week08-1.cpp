// week08-1.cpp �ǲ߭p�e matrix ����1�D ���̦������H
// LeetCode 1672. Richest Customer Wealth
class Solution { //�̦h���������H, ���u�h�ֿ��v?
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0; //�j��e�� ans �O0
        for(auto a : accounts){ // �q�@��H,�D�X1�ӤHa
            int sum = 0; //�j��e��,sum�O0
            for(auto b : a){ // a[0] + a[1] + a[2] + ...
                sum += b; //�j�餤�� sum += b �V�[�V�h
            }//�j��᭱, �ݳo�ӤH���s���`��, �O�_�󦳿�
            if(sum>ans) ans = sum; //�󦳿�,�N��s ans
        }
        return ans;//�j��᭱ ans ���ӥ�
    }
};
