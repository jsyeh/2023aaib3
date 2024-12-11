// week14-2.cpp 學習計畫 Linked List 第3題 (快寫完了!!!)
// LeetCode 2. Add Two Numbers 超級大的數,有100位數,兩數相加
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode();
        ListNode* now = ans; // 模仿前2週的寫法
        int carry = 0; // 進位的小數字
        while( l1 != nullptr || l2 != nullptr) { // 只針對其中一個 list 1
            if(l1==nullptr){ // 如果 list 1 是空的, 下面要移掉 l1
                int here = l2->val + carry; //移掉 l1 剩下 l2
                now -> next = new ListNode( here%10 ); // 建新 node
                carry = here / 10;
                l2 = l2 -> next; // 移掉 l1 剩下 l2
            } else if(l2==nullptr){ //如果 list 2 是空的, 下面要移掉 l2
                int here = l1->val + carry; // 移掉 l2 剩下 l1
                now -> next = new ListNode( here%10 ); // 建新 node
                carry = here / 10;
                l1 = l1 -> next; // 移掉 l2 剩下 l1
            } else { // 完美,照舊
                int here = l1->val + l2->val + carry;
                now -> next = new ListNode( here%10 ); // 建新 node
                carry = here / 10;
                l1 = l1 -> next; // 下一筆
                l2 = l2 -> next;
            }
            now = now -> next; // 下一筆
        }
        return ans -> next; //等一下要 return ans->next
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
