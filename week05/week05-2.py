# week05-2.py LeetCode 709. To Lower Case
class Solution:
    def toLowerCase(self, s: str) -> str:
        ans = ''
        for c in s:
            ans += c.lower()
        return ans