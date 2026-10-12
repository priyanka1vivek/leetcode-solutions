// Last updated: 10/12/2026, 10:51:47 PM
1class Solution {
2public:
3    bool checkSubarraySum(vector<int>& nums, int k) {
4        int n = nums.size();
5        if (n < 2) return false;
6        
7        unordered_map<int, int> f; // remainder -> first occurrence index
8        f[0] = -1; // Base case: remainder 0 occurred conceptually at index -1
9        
10        int sum = 0;
11        
12        for (int i = 0; i < n; i++) {
13            sum += nums[i];
14            int rem = sum % k;
15            
16            // Handle negative remainders if array contains negative numbers
17            if (rem < 0) {
18                rem += k;
19            }
20            
21            if (f.find(rem) != f.end()) {
22                // If length of this subarray is at least 2, we found a good subarray
23                if (i - f[rem] >= 2) {
24                    return true;
25                }
26            } else {
27                // Store ONLY the first occurrence of this remainder to maximize potential length
28                f[rem] = i;
29            }
30        }
31        
32        return false;
33    }
34};