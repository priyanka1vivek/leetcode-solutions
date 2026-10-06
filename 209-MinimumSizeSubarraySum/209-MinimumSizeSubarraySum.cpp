// Last updated: 10/6/2026, 11:18:55 PM
1class Solution {
2public:
3    int minSubArrayLen(int target, vector<int>& nums) {
4        int n = nums.size();
5        int low = 0, high = 0, sum = 0;
6        int res = INT_MAX;
7        while(high < n){
8            sum = sum + nums[high];
9            while (sum >= target){
10                int len = high - low + 1;
11                res = min(res, len);
12
13                sum = sum - nums[low];
14                low++;
15                
16            }
17            high++;
18        }
19        return (res == INT_MAX)? 0 : res;
20    }
21};