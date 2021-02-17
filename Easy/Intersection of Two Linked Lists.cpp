/**
 Runtime: 44 ms, faster than 61.22% of C++ online submissions for Intersection of Two Linked Lists.
Memory Usage: 14.4 MB, less than 86.18% of C++ online submissions for Intersection of Two Linked Lists.
 
 
class Solution {
public:
    int getLength(ListNode* head){
        int cnt=0;
        while(head!=NULL)
        {
            cnt++;head=head->next;
        }
        return cnt;
    }
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int A_len=getLength(headA);
        int B_len=getLength(headB);
        int k=abs(A_len-B_len);
        bool isABig=(A_len>B_len);
        ListNode* tmp=(isABig)?headA:headB;
        ListNode* another=(isABig)?headB:headA;
        
        while(k--){
            tmp=tmp->next;
        }
        
        
        while(tmp||another){
            if(tmp==another)
                return tmp;
            tmp=tmp->next;
            another=another->next;
        }
        
        return NULL;
    }
};


Runtime: 44 ms, faster than 61.22% of C++ online submissions for Intersection of Two Linked Lists.
Memory Usage: 14.5 MB, less than 86.18% of C++ online submissions for Intersection of Two Linked Lists.
*/
class Solution{
    public:
     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode* a=headA,*b=headB;
         while(a!=b){
             a=(a==NULL)?headB:a->next;
             b=(b==NULL)?headA:b->next;
         }
        return a;
     
     }
    
};
