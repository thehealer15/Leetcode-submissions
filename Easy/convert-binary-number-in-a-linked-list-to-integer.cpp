
// https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/submissions/

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        stack<int> stk;
        while(head){
            stk.push(head->val);
            head=head->next;
        }
        int i=0;
        int number=0;
        while(!stk.empty()){
           int f= pow(2,i);
            i++;
            number+=stk.top()*f;
               stk.pop();            
        }
     return number;   
    }      
};