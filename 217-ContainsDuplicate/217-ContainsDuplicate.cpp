// Last updated: 10/27/2026, 7:41:53 PM
1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {   unordered_set<int> seen;
4        int n = nums.size();
5        for(int i=0;i<n;i++){
6            if(seen.count(nums[i])){
7                return true;
8            }
9            seen.insert(nums[i]);
10        }
11        return false;
12    }
13};