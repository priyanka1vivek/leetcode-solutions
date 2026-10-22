// Last updated: 10/22/2026, 9:44:55 PM
1class Solution {
2public:
3    int getSum(int a, int b) {
4        // Bitwise Addition Template:
5        // - XOR (^) calculates the sum of bits without the carry.
6        // - AND (&) with Left Shift (<< 1) calculates the carry positions.
7        
8        while (b != 0) {
9            // 1. Calculate the carry bits where both bits are 1, then shift left by 1
10            int carry = (unsigned int)(a & b) << 1;
11            
12            // 2. Calculate the addition without carry using XOR
13            a = a ^ b;
14            
15            // 3. Assign the carry to b so it can be added in the next iteration
16            b = carry;
17        }
18        
19        // When b becomes 0, all carries have been resolved, and a holds the final sum
20        return a;
21    }
22};