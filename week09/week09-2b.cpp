/// �o�D�����for�j��C�C��A�]���Ʀr�|�ܤj
/// �ҥH�N�����Ʀr�۴�N�n�F
/// �_-�_�G1 3 5 7 9 = (9-1)//2 + 1
/// ��-�_�G0 1 3 5 7 = (7-0)//2 + 1
/// �_-���G1 3 5 6 = (6-1)//2 + 1
/// ��-���G0 1 3 5 6 = (6-0)//2
class Solution {
public:
    int countOdds(int low, int high) {
        //if(low%2==1 && high%2==1) return (high-low)/2 + 1;
        //if(low%2==0 && high%2==1) return (high-low)/2 + 1;
        //if(low%2==1 && high%2==0) return (high-low)/2 + 1;
        //if(low%2==0 && high%2==0) return (high-low)/2;
        if(low%2==0 && high%2==0) return (high-low)/2;
        else return (high-low)/2 + 1;
    }
};
