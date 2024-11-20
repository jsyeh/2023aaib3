# week11-3.py LeetCode 2461.
class Solution:
    def maximumSubarraySum(self, nums: List[int], k: int) -> int:
        ans, total = 0, 0  # �̤j��total �P �ثe�� total
        counter = Counter()  # ����p�g�B�k��j�g
        for i in range(k):  # ���X�e��k�ӼƦr
            num = nums[i]
            counter[num] += 1
            total += num  # ��{�b����, �[�� total ��
        if len(counter)==k: ans = max(ans, total)
        # �W���u�B�z��1�դ����, �U���n�B�z����
        for i in range(k, len(nums)):  # ����κC�C�q����,����̥k��
            left, right = nums[i-k], nums[i]  # �����ª��B�k��s��
            counter[left] -= 1  # ���(��)
            counter[right] += 1  # �[�k��(�s)
            total = total - left + right  # ���(��)�B�[�k��(�s)
            if counter[left]==0: del counter[left]  # �0,�N�R��
            if len(counter)==k: ans = max(ans, total)
        return ans
