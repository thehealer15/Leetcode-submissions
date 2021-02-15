/*
Runtime: 12 ms, faster than 42.61% of C++ online submissions for Merge Two Sorted Lists.
Memory Usage: 14.6 MB, less than 97.74% of C++ online submissions for Merge Two Sorted Lists.
https://leetcode.com/problems/merge-two-sorted-lists

 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1) return l2;
        if(!l2) return l1;
        bool fuck=(l1->val>l2->val);
        ListNode* head=(fuck)?l2:l1;
        if(fuck)
            l2=l2->next;
        else
            l1=l1->next;
        
        ListNode* tmp=head;
        while(l1&&l2){
            if(l1->val>l2->val){
                tmp->next=l2;
                l2=l2->next;
            }
            else{
                tmp->next=l1;
                l1=l1->next;
            }
            tmp=tmp->next;
        }
        if(!l1 ) tmp->next=l2;
        if(!l2 ) tmp->next=l1;
        return head;
    }
};
