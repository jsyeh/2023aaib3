/// Week12-1.cpp �ǲ߸�Ƶ��c�� struct vs. class ��Ӭ�
#include <iostream>
#include <string> ///���FCat�ߪ��W�r
using namespace std;
///struct Node {}; ///������������ C�y�������c
///class Cat {}; ///���e�X�g,���йL,C++��j�j
struct Node {
    int val; ///value�Y�g, �o��Node�̭�����
};
class Cat {
public:
    string name; ///�ߪ��W�r, ���e�X�g�йL
};
int main()
{
    Cat cat1;
    cat1.name = "cattie";
    Node node;
    node.val = 1;
}
