// week10-6.cpp (�e��)�ǲ߭p�e Basic ��8�D
// LeetCode 1822. Sign of the Product of an Array
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int total = 1; // �������_�Ӫ����t��
        for(int i=0; i<nums.size(); i++) {
            //total *= nums[i]; //�Ʀr���୼�Ӥj
            if(nums[i]>0) total *= 1;
            if(nums[i]<0) total *= -1;
            if(nums[i]==0) total *= 0;
        }
        if(total>0) return 1;
        if(total<0) return -1;
        return 0;
    }
};
