# week09-3.py �ǲ߭p�e Math ��2�D
# LeetCode 1491. Average Salary Excluding the Minimum and Maximum Salary
class Solution:
    def average(self, salary: List[int]) -> float:
        salary.sort()  # �� �p��j �Ʀn

        total = 0
        for i in range(1,len(salary)-1):  # �׶}�̥���B�̥k��
            total += salary[i]
        return total / (len(salary)-2)  # ���k, ��X����
