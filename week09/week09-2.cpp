// week09-2.cpp �ǲ߭p�e Math ��1�D
// LeetCode 1523. Count Odd Numbers in an Interval Range
// �� low...high ����, ���X�ө_�� (�Y�����]�t)
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = (high-low) /2; // �o�Ӥ�k�O��!
        if(low%2==1 || high%2==1) ans++; //�Y�����_��,�N�n+1
        // �����D������, �浹�j�a�Q�Q��
        return ans; // �����n�e�X, �ڭ̦b Testcase ����,�h�մX��
    }
};
