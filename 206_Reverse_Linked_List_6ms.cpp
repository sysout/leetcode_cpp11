/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL) return NULL;
        ListNode new_head(0);
        while(head){
            ListNode * old = new_head.next;
            ListNode * nxt = head->next;
            head->next = old;
            new_head.next=head;
            head=nxt;
        }
        return new_head.next;
    }
};
