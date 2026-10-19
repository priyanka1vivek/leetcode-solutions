// Last updated: 10/19/2026, 9:58:27 PM
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        unordered_map<int, int> mp;
5        for (int i = 0; i < nums.size(); i++) {
6            int comp = target - nums[i];
7            if (mp.count(comp)) return {mp[comp], i};
8            mp[nums[i]] = i;
9        }
10        return {};
11    
12    }
13};