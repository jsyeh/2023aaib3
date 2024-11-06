# week09-4.cpp 學習計畫 Math 第3題
# LeetCode 860. Lemonade Change
class Solution:
    def lemonadeChange(self, bills: List[int]) -> bool:
        b5, b10, b20 = 0, 0, 0  # 一開始鈔票 0 張
        for b in bills:  # 用迴圈,慢慢收客人的鈔票
            if b==5:  # 客人拿5元鈔,不用找錢
                b5+=1  # 直接把 5元收起來
            elif b==10:  # 客人拿10元鈔,要找錢錢哦!
                if b5==0: return False # 什麼?沒5元? 失敗
                b10 += 1  # 如果沒失敗,就收錢
                b5 -= 1  # 再找 5元給客人
            else:  # 最後是20元鈔
                if b10>0 and b5>0: # 第1種找法:10元+5元
                    b20 += 1
                    b10 -= 1
                    b5 -= 1
                elif b5>=3: # 第2種找法: 5元*3
                    b20 += 1
                    b5 -= 3
                else:  # 都不能找零錢的話
                    return False
        return True
