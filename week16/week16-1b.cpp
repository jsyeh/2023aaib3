// week16-1b.cpp �ǲ߭p�e Math �̫�1�D
// LeetCode 50. Pow(x, n)
class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        if(n>0){ // �κƨg�{�]���g�k, ���O n<0 �|����
            for(int i=0; i<n; i++){
                ans *= x;
            }
        }else if(n<0){ // �S�O�w�� n<0 �� �t�t�o��, �����˹L�Ӫ�����
            for(int i=0; i<-n; i++){
                ans *= 1/x;
            }
        }
        return ans;
    }
};
