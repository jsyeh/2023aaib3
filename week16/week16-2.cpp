// week16-2.cpp �ǲ߭p�e Math �̫�1�D �Ψ禡�I�s�禡,²�ư��D
// LeetCode 50. Pow(x, n)
class Solution {
public:
    double myPow(double x, long long int n) {
        if(n==0) return 1; //  1 *x *x *x *x
        if(n<0){ // �J��t��n,���N�t�t�o��, �P�ɧ� x �ܦ�����
            n = -n;
            x = 1/x; // �]�� x �� -1 ����, �O 1/x
        }
        if(n%2==0){
            double now = myPow(x, n/2); //�@�b��x�ۭ�
            return now * now; // ���@�b�B�k�@�b, �A�ۭ�
        }else{ // �_�ƭӬۭ�
            double now = myPow(x, n/2);
            return now * now * x;
        }
    }
};
