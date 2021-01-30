/*
Link  <==> https://leetcode.com/problems/reverse-linked-list
Runtime: 8 ms, faster than 75.63% of C++ online submissions for Reverse Linked List.
Memory Usage: 8.6 MB, less than 72.63% of C++ online submissions for Reverse Linked List
*/
class Solution {
    vector<int> v;
    public:
    Solution(){
        v.reserve(10);
    }
    ListNode* reverseList(ListNode* head) {
        ListNode* t=head;
        while(t){
            v.push_back(t->val);
            t=t->next;
        }
        t=head;
        while(t){
            t->val=v[v.size()-1];
            v.pop_back();
            t=t->next;
        }
        return head;
    }
};
