/*

Runtime: 24 ms, faster than 74.49% of C++ online submissions for Remove Linked List Elements.
Memory Usage: 15.1 MB, less than 54.36% of C++ online submissions for Remove Linked List Elements.
https://leetcode.com/problems/remove-linked-list-elements/
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
       if(head==NULL)return NULL;
        
        if(head->val==val){
            if( head->next==NULL){
                
            delete head;
            return NULL;
            }
            while(head&&head->val==val){
                ListNode* t2=head;
                head=head->next;
                delete t2;
            }
        }
        if(head==NULL)return NULL;
        ListNode* tmp=head;//,*tail=tmp;
        while(tmp->next){
            
            if(tmp->next->val!=val)
                tmp=tmp->next;
            else{
                ListNode* t2=tmp->next;
                tmp->next=t2->next;
                delete t2;
            }
            
        }
        return head;
    }
};
