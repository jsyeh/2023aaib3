// week15-3.cpp �ǲ߭p�e Linked List ��4�D (�֭n�����F, ����W�W�g��2�D�g�n,�ܨ禡)
// �M��3�D�ܹ�,���O�u�ϹL�ӡv(��2�D�]�O�ϹL��,2�g�e�йL)
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //�W�W�g���{��, �i�H�ϹL��
        return myReverse(l1); // �I�s�禡
    }
    ListNode* myReverse(ListNode* l1) { // �o���B�ۭq�禡
        vector<int> a; //�̭��|��@��Ʀr
        while( l1 != nullptr ){ // �@����,�쵲��
            a.push_back( l1-> val ); // ��
            l1 = l1->next; // �U�@��
        }
        ListNode * ans = new ListNode();
        ListNode * now = ans;
        int N = a.size();
        for(int i=N-1; i>=0; i--) {
            now->next = new ListNode( a[i] );
            now = now->next;
        }
        return ans->next;
    }
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
