// Last updated: 10/10/2026, 10:56:09 AM
1class Solution {
2public:
3int func(int n){
4    int sum = 0;
5    while(n > 0){
6        int d = n % 10;
7        n = n/10;
8        sum += d * d;
9    }
10    return sum;
11}
12    bool isHappy(int n) {
13        int slow = n;
14        int fast = n;
15        while(fast != 1){
16            slow = func(slow);
17            fast = func(func(fast));
18
19            if(slow == fast && slow != 1){
20                return false;
21            }
22        }
23        return true;
24    }
25};