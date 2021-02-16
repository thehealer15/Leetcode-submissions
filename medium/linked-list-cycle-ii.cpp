/*
Runtime: 8 ms, faster than 81.25% of C++ online submissions for Linked List Cycle II.
Memory Usage: 7.6 MB, less than 57.50% of C++ online submissions for Linked List Cycle II
https://leetcode.com/problems/linked-list-cycle-ii/submissions/
*/
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL||head->next==NULL) return NULL;
        ListNode * slow=head,*fast=head;
        do{
            slow=slow->next;
            fast=fast->next->next;
        }while(  slow!=fast && (fast!=NULL && fast->next!=NULL));
        if(fast==NULL ||fast->next==NULL) return NULL;
        
        fast=head;
        while(slow!=fast){
            slow=slow->next;fast=fast->next;
        }
        return fast;
    }
};
