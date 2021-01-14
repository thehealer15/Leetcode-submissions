/*
Link: https://leetcode.com/problems/merge-in-between-linked-lists/

Verdict:
Runtime: 292 ms, faster than 100.00% of C++ online submissions for Merge In Between Linked Lists.
Memory Usage: 95 MB, less than 10.40% of C++ online submissions for Merge In Between Linked Lists.
*/
class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* tmp=list1;
        ListNode* tail=NULL;
        b=b-a+1;
        while(a--){
            tail=tmp;
            tmp=tmp->next;
        }
        tail->next=list2;
        
        while(b--){
            tail=tmp;
            tmp=tmp->next;
            delete tail;
        }
        
        while(list2->next!=NULL)
                list2=list2->next;
            
        list2->next=tmp;
        return list1;
    }
};