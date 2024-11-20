# week11-3.py LeetCode 2461.
class Solution:
    def maximumSubarraySum(self, nums: List[int], k: int) -> int:
        ans, total = 0, 0  # 最大的total 與 目前的 total
        counter = Counter()  # 左邊小寫、右邊大寫
        for i in range(k):  # 取出前面k個數字
            num = nums[i]
            counter[num] += 1
            total += num  # 把現在的數, 加到 total 裡
        if len(counter)==k: ans = max(ans, total)
        # 上面只處理第1組毛毛蟲, 下面要處理後續
        for i in range(k, len(nums)):  # 毛毛蟲慢慢從中間,走到最右邊
            left, right = nums[i-k], nums[i]  # 左邊舊的、右邊新的
            counter[left] -= 1  # 減左邊(舊)
            counter[right] += 1  # 加右邊(新)
            total = total - left + right  # 減左邊(舊)、加右邊(新)
            if counter[left]==0: del counter[left]  # 減成0,就刪掉
            if len(counter)==k: ans = max(ans, total)
        return ans
