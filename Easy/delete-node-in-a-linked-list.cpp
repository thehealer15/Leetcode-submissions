/**
https://leetcode.com/problems/delete-node-in-a-linked-list
Runtime: 12 ms, faster than 93.36% of C++ online submissions for Delete Node in a Linked List.
Memory Usage: 7.6 MB, less than 87.54% of C++ online submissions for Delete Node in a Linked List.
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* tmp=node->next;
        node->val=node->next->val;
        node->next=node->next->next;
        delete( tmp);
    }
};
