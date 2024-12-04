// week13-6.cpp �ǲ߭p�e Linked List ��2�D
// LeetCode 206. Reverse Linked List
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> a; // �ΰ}�C,�s Linked List �� val��
        while(head != nullptr) { // �u�n�٦��F��
            a.push_back(head->val); // �N���,����J�}�C
            head = head->next; // ���U�@��
        }
        ListNode * ans = new ListNode(); // �M�e1�D�@��
        ListNode * now = ans; // �M�e1�D�@��
        for(int i=a.size()-1; i>=0; i--) { //�ϹL�Ӫ��}�C
            now->next = new ListNode( a[i] );
            now = now->next; // ���U�@��
        }
        return ans->next; // �M�e1�D�@��
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
