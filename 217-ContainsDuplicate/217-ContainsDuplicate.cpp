// Last updated: 10/19/2026, 10:00:00 PM
1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        unordered_set<int> st(nums.begin(), nums.end());
5        return st.size() < nums.size();
6    }
7};