// week14-2.cpp �ǲ߭p�e Linked List ��3�D (�ּg���F!!!)
// LeetCode 2. Add Two Numbers �W�Ťj����,��100���,��Ƭۥ[
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode();
        ListNode* now = ans; // �ҥ�e2�g���g�k
        int carry = 0; // �i�쪺�p�Ʀr
        while( l1 != nullptr || l2 != nullptr) { // �u�w��䤤�@�� list 1
            if(l1==nullptr){ // �p�G list 1 �O�Ū�, �U���n���� l1
                int here = l2->val + carry; //���� l1 �ѤU l2
                now -> next = new ListNode( here%10 ); // �طs node
                carry = here / 10;
                l2 = l2 -> next; // ���� l1 �ѤU l2
            } else if(l2==nullptr){ //�p�G list 2 �O�Ū�, �U���n���� l2
                int here = l1->val + carry; // ���� l2 �ѤU l1
                now -> next = new ListNode( here%10 ); // �طs node
                carry = here / 10;
                l1 = l1 -> next; // ���� l2 �ѤU l1
            } else { // ����,����
                int here = l1->val + l2->val + carry;
                now -> next = new ListNode( here%10 ); // �طs node
                carry = here / 10;
                l1 = l1 -> next; // �U�@��
                l2 = l2 -> next;
            }
            now = now -> next; // �U�@��
        }
        return ans -> next; //���@�U�n return ans->next
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
