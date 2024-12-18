// week15-4.cpp �ǲ߭p�e Linked List ��4�D (����W�W�g��2�D�g�n,�ܨ禡)
// �M��3�D�ܹ�,���O�u�ϹL�ӡv(��2�D�]�O�ϹL��,2�g�e�йL)
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = myReverse(l1);
        l2 = myReverse(l2);
        ListNode * ans = new ListNode();
        ListNode * now = ans;
        int carry = 0;
        while( l1 != nullptr || l2 != nullptr) {
            if(l1 == nullptr) { // �׶} l1 (�⧹�㪩�K�W��, �A�R�� l1)
                int here =         + l2->val + carry;
                now->next = new ListNode( here%10 ); //�u�d �Ӧ��
                carry = here / 10; // �u�d�i�쪺����
                // ---------------
                l2 = l2->next;
                now = now->next;
            } else if(l2 == nullptr) { // �׶} l2 (�⧹�㪩�K�W��, �A�R�� l2)
                int here = l1->val +         + carry;
                now->next = new ListNode( here%10 ); //�u�d �Ӧ��
                carry = here / 10; // �u�d�i�쪺����
                l1 = l1->next;
                // ----------------
                now = now->next;
            } else { // ���㪩 (���g�o��)
                int here = l1->val + l2->val + carry;
                now->next = new ListNode( here%10 ); //�u�d �Ӧ��
                carry = here / 10; // �u�d�i�쪺����
                l1 = l1->next;
                l2 = l2->next;
                now = now->next;
            }
        }
        if(carry>0) now->next = new ListNode(carry);

        return myReverse(ans->next); // �I�s�禡
    }
    ListNode* myReverse(ListNode* l1) { // �o���B�ۭq�禡
        vector<int> a; //�̭��|��@��Ʀr //�W�W�g���{��, �i�H�ϹL��
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
