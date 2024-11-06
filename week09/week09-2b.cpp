/// 硂肈ぃノfor癹伴篊篊衡计穦
/// ┮碞钡计搭碞
/// -1 3 5 7 9 = (9-1)//2 + 1
/// 案-0 1 3 5 7 = (7-0)//2 + 1
/// -案1 3 5 6 = (6-1)//2 + 1
/// 案-案0 1 3 5 6 = (6-0)//2
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
