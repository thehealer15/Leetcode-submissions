/*
https://leetcode.com/problems/linked-list-cycle
Runtime: 8 ms, faster than 74.06% of C++ online submissions for Linked List Cycle.
Memory Usage: 7.6 MB, less than 93.66% of C++ online submissions for Linked List Cycle.
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow=head;ListNode *fast=head;
        while(fast&& fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                return true;
            }
        }
        return false;
    }
};
