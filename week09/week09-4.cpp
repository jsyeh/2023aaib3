
// week09-4.cpp �ǲ߭p�e Math ��3�D
// LeetCode 860. Lemonade Change
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int b5 = 0, b10 = 0, b20 = 0; //�@�}�l���r�� 0 �i
        for(int b : bills) {
            if(b==5) b5++; // �ȤH��5���r,�������_��
            else if(b==10) { // �ȤH��10���r �ݯण����
                if(b5==0) return false; //�S�����i�H��, ���V�F
                b10++; // �h�F1�i10���r
                b5--; // �֤F1�i5���r
            } else { // �ȤH��20���r, ��L1�i10���B1�i5��
                if(b10>0 && b5>0){
                    b20++;
                    b10--;
                    b5--;
                } else if(b5>=3){
                    b20++;
                    b5-=3;
                } else return false; //�S��k���, sorry
                //�n���g���F, �߱����b�}�ߪ��ɭ�!!!!
            }
        }
        return true; //�ਫ��̫�, �ܤ�²��! ���ߧA�ͷN����!
    }
};
