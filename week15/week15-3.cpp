// week15-3.cpp 學習計畫 Linked List 第4題 (快要完成了, 先把上上週第2題寫好,變函式)
// 和第3題很像,但是「反過來」(第2題也是反過來,2週前教過)
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //上上週的程式, 可以反過來
        return myReverse(l1); // 呼叫函式
    }
    ListNode* myReverse(ListNode* l1) { // 發明、自訂函式
        vector<int> a; //裡面會塞一堆數字
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
