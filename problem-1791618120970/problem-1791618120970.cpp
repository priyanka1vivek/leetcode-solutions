// Last updated: 10/10/2026, 1:12:00 PM
1class Solution {
2public:
3    long long maxAlternatingSum(vector<int>& nums) {
4   vector<int>& a = nums;
5        int n = a.size();
6        
7        // 4 States:
8        // even0: max alternating sum with 0 deletions, ending with '+'
9        // odd0 : max alternating sum with 0 deletions, ending with '-'
10        // even1: max alternating sum with 1 deletion, ending with '+'
11        // odd1 : max alternating sum with 1 deletion, ending with '-'
12        
13        long long even0 = a[0];
14        long long odd0 = -1e15;
15        long long even1 = a[0];
16        long long odd1 = -1e15;
17        
18        long long res = a[0];
19        
20        for (int i = 1; i < n; i++) {
21            long long prev_even0 = even0;
22            long long prev_odd0 = odd0;
23            long long prev_even1 = even1;
24            long long prev_odd1 = odd1;
25            
26            // 1. Zero deletion updates
27            even0 = max((long long)a[i], prev_odd0 + a[i]);
28            odd0 = prev_even0 - a[i];
29            
30            // 2. One deletion updates:
31            // - even1: either extend from previous odd1 (+ a[i]), or delete a[i] when a[i] was supposed to be subtracted (extending from prev_even0)
32            even1 = max({(long long)a[i], prev_odd1 + a[i], prev_even0});
33            // - odd1: either extend from previous even1 (- a[i]), or delete a[i] when a[i] was supposed to be added (extending from prev_odd0)
34            odd1 = max({prev_even1 - a[i], prev_odd0});
35            
36            res = max({res, even0, odd0, even1, odd1});
37        }
38        
39        return res;
40
41        }
42};