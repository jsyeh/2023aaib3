// week10-5.cpp �ǲ߭p�e Math ��4�D
// LeetCode 976. Largest Perimeter Triangle
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // �p��j�Ʀn!
        int N = nums.size();
        for(int i=0; i<N-2; i++) { // �Q�� nums[N-1-i] �q�j��p, �˹L�ӬD�Ʀr
            int big = nums[N-1-i], middle = nums[N-2-i], small = nums[N-3-i];
            if(middle+small > big) return big+middle+small; // ����o!
        }
        return 0; // �䤣�쪺��, �N�^�� 0
    } // 1, 1, 1, 1, 1, 2, 2, 100
};
