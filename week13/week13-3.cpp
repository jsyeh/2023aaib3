// week13-3.cpp �ϥ� LeetCode �� Playgound �C�ֳ� �g�{��
// LeetCode �� #include <iostream>�Musing namespace std;���g�n�F
// �k�U��, �� stdin �i��J���, �K�W�A�� Puzzle Input
//3   4
//4   3
//2   5
//1   3
//3   9
//3   3
int main() {
    int a, b;
    vector<int> A, B;
    while( cin >> a >> b ) {
        A.push_back(a); //�� �Ʀra ��J �}�CA
        B.push_back(b); //�� �Ʀrb ��J �}�CB
    }
    sort( A.begin(), A.end() );//�ؼ�:�� A �q�p��j�Ʀn
    sort( B.begin(), B.end() );//�ؼ�:�� B �q�p��j�Ʀn
    int ans = 0;
    for(int i=0; i< A.size(); i++) {
        //cout << A[i] << " "; //�L�X��, �u���O�u�p��j�Ʀn�v
        ans += abs(A[i] - B[i]); //�۴�,�u������
    }
    cout << "�[�_�Ӫ����׬O" << ans;
}
