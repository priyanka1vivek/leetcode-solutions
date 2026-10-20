// Last updated: 10/20/2026, 10:48:27 PM
1class Solution {
2public:
3    int missingNumber(vector<int>& nums) {
4        int n = nums.size();
5        
6        // 1. Calculate the expected sum from 0 to n using the formula n * (n + 1) / 2
7        int expectedSum = n * (n + 1) / 2;
8        
9        // 2. Calculate the actual sum of elements present in the array
10        int actualSum = 0;
11        for (int i = 0; i < n; i++) {
12            actualSum += nums[i];
13        }
14        
15        // 3. The difference between the expected and actual sum gives the missing number
16        int missing = expectedSum - actualSum;
17        
18        return missing;
19    }
20};