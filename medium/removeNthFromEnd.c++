class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * first;
        ListNode* second;
        
        first = head;
        second = head;
        
        while(n--){
            second=second->next;
        }
        
        ListNode * prev = first;
        
        while(second!=NULL){
            second=second->next;
            prev = first;
            first=first->next;
        }
        
        if(prev==first){
            first = first->next;
            head = first;
        }else{
            prev->next = first->next;
        }
        
        return head;
    }
};
