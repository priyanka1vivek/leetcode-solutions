// Last updated: 10/10/2026, 11:04:09 AM
1class Solution {
2public:
3    int pivotIndex(vector<int>& nums) {
4        int n = nums.size();
5        int sum = 0;
6        for(int x : nums){
7            sum += x;
8        }
9        int left = 0;
10        for(int i = 0;i < n;i++){
11            if(i>0){
12                left += nums[i-1];
13            }
14            int right = sum - nums[i] - left;
15
16            if(left == right){
17                return i;
18            }
19        }
20        return -1;
21    }
22};