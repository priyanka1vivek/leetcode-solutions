// Last updated: 10/5/2026, 11:31:36 PM
1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4        int left=0;
5        for(int right = 0; right < nums.size(); right++){
6            if(nums[right]!=0){
7                swap(nums[left], nums[right]);
8                left++;
9            }
10        }
11
12    }
13};