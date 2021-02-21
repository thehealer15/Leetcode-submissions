/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||head->next==NULL||k==0)return head;
        ListNode* temp=head;
        int len=1;
        
        while(temp->next&&len++)
            temp=temp->next;
        
        temp->next=head;
        
        k=k%len;
        k=len-k;
        while(k--)
        {
            temp=temp->next;
        }    
        head=temp->next;
        temp->next=NULL;
        return head;
    }
};
