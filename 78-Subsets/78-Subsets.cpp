// Last updated: 10/30/2026, 1:21:47 PM
1class Solution {
2private:
3    void backtrack(int index, vector<int> &nums, vector<int>& current, vector<vector<int>>& result){
4        result.push_back(current);
5        for(int i = index;i<nums.size();i++){
6            current.push_back(nums[i]);
7            backtrack(i+1,nums,current,result);
8            current.pop_back();
9        }
10    }
11public:
12    vector<vector<int>> subsets(vector<int>& nums) {
13        vector<vector<int>> result;
14        vector<int> current;
15        backtrack(0, nums, current, result);
16        return result;
17    }
18};