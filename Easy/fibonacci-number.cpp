// Runtime: 24 ms, faster than 5.84% of C++ online submissions for Fibonacci Number.
// Memory Usage: 5.9 MB, less than 91.84% of C++ online submissions for Fibonacci Number.
// https://leetcode.com/problems/fibonacci-number
// class Solution {
// public:
//     int fib(int n) {
//         if(n==0||n==1)
//             return n;
//         else return fib(n-1)+fib(n-2);
//     }
// };

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Fibonacci Number.
// Memory Usage: 5.8 MB, less than 98.44% of C++ online submissions for Fibonacci Number
// https://leetcode.com/problems/fibonacci-number

class Solution {
public:
    int fib(int n) {
        if(n==0||n==1)return n;
        int a=0,b=1,cnt=1;
        for(int i=2;i<=n;i++){
            cnt=a+b;
            a=b;
            b=cnt;
        }
        return cnt;
    }
};
