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
    // use pure pointer operations
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = NULL;
        ListNode** tail = &head;
        int carry=0;
        while( l1 || l2 || carry ){
            int i=0;
            int j=0;
            if(l1){
                i=l1->val;
                l1=l1->next;
            }
            if(l2){
                j=l2->val;
                l2=l2->next;
            }
            int sum=i+j+carry;
            carry=sum/10;
            *tail=new ListNode(sum%10);
            tail=&((*tail)->next);
        }
        return head;
    }
};
