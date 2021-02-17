/*
Runtime: 24 ms, faster than 74.49% of C++ online submissions for Remove Linked List Elements.
Memory Usage: 15.2 MB, less than 54.36% of C++ online submissions for Remove Linked List Elements.


 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy= new ListNode(-1,head);
        if(head==NULL)
            return NULL;
        head=dummy;
        
        while(dummy->next!=NULL){
            if(dummy->next->val==val){
                ListNode* t2=dummy->next;
                dummy->next=t2->next;
                delete t2;
            }
            else
                dummy=dummy->next;
        }
        return head->next;
    }
};
