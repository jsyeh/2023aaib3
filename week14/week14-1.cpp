// week14-1.cpp �ǲ߭p�e Linked List ��3�D (�g��@�b�B²�檺����)
// LeetCode 2. Add Two Numbers �W�Ťj����,��100���
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode();
        ListNode* now = ans; // �ҥ�e2�g���g�k
        while( l1 != nullptr ) { // �u�w��䤤�@�� list 1
            now -> next = new ListNode( l1 -> val ); // �طs node
            l1 = l1 -> next; // �U�@��
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
