// Last updated: 10/10/2026, 11:01:04 AM
1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        int n = nums.size();
5        int best_ending = nums[0];
6        int ans = nums[0];
7        for(int i = 1;i < n;i++){
8            int v1 = best_ending + nums[i];
9            int v2 = nums[i];
10            best_ending = max(v1,v2);
11            ans = max(ans, best_ending);
12        }
13        return ans;
14    }
15};