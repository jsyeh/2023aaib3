// week15-4.cpp 學習計畫 Linked List 第4題 (先把上上週第2題寫好,變函式)
// 和第3題很像,但是「反過來」(第2題也是反過來,2週前教過)
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = myReverse(l1);
        l2 = myReverse(l2);
        ListNode * ans = new ListNode();
        ListNode * now = ans;
        int carry = 0;
        while( l1 != nullptr || l2 != nullptr) {
            if(l1 == nullptr) { // 避開 l1 (把完整版貼上來, 再刪掉 l1)
                int here =         + l2->val + carry;
                now->next = new ListNode( here%10 ); //只留 個位數
                carry = here / 10; // 只留進位的部分
                // ---------------
                l2 = l2->next;
                now = now->next;
            } else if(l2 == nullptr) { // 避開 l2 (把完整版貼上來, 再刪掉 l2)
                int here = l1->val +         + carry;
                now->next = new ListNode( here%10 ); //只留 個位數
                carry = here / 10; // 只留進位的部分
                l1 = l1->next;
                // ----------------
                now = now->next;
            } else { // 完整版 (先寫這個)
                int here = l1->val + l2->val + carry;
                now->next = new ListNode( here%10 ); //只留 個位數
                carry = here / 10; // 只留進位的部分
                l1 = l1->next;
                l2 = l2->next;
                now = now->next;
            }
        }
        if(carry>0) now->next = new ListNode(carry);

        return myReverse(ans->next); // 呼叫函式
    }
    ListNode* myReverse(ListNode* l1) { // 發明、自訂函式
        vector<int> a; //裡面會塞一堆數字 //上上週的程式, 可以反過來
        while( l1 != nullptr ){ // 一直塞,到結束
            a.push_back( l1-> val ); // 塞
            l1 = l1->next; // 下一筆
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
