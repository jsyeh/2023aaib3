// week12-2.cpp �ǲ߭p�e Linked List ��1�D (�٨S�g��)
// LeetCode 21. Merge Two Sorted Lists
class Solution {
public: // * �N�����, �Ѯv�⥦�s�j�W�u�ΨӺ˷ǡv���u�ǬP�v
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //ListNode* ans = list1; // �i�౵(�ª�)list1 �L�h
        //ListNode* ans = new ListNode(99); // �i�}�s��(��99)
        ListNode* ans = new ListNode(99, new ListNode(90));
        // �}�s�� Node �̭���99, �᭱�౵�u�s��Node�̦�90�v
        return ans;
    } //�Ч�3�ت���,������L,�� Test Result�̭�����Output
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
