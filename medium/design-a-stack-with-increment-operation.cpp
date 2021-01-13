
// https://leetcode.com/problems/design-a-stack-with-increment-operation/
// 36ms, faster than 99.81% 
// memory 20.9 less than 100%solutions

class CustomStack {
    int * arr;
    int top;
    int maxSize;
    
public:
    CustomStack(int maxSize) {
        arr= new int[maxSize];
        top=-1;
        this->maxSize=maxSize;
    }
    
    void push(int x) {
        if(top<maxSize-1){
            arr[++top]=x;
        }
    }
    
    int pop() {
        if(top==-1){
            return -1;
            
        }
        return arr[top--];
    }
    
    void increment(int k, int val) {
        for(int i=0;i<top+1 && i<k ; ++i)
            arr[i]+=val;
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */