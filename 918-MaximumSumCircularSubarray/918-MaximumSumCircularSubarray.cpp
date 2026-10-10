// Last updated: 10/10/2026, 12:39:34 PM
1class Solution {
2public:
3    int maxSubarraySumCircular(vector<int>& nums) {
4        int n = nums.size();
5        int max_ending = nums[0], max_sum = nums[0];
6        int min_ending = nums[0], min_sum = nums[0];
7        int total_sum = nums[0];
8
9        for(int i = 1; i < n; i++){
10            total_sum += nums[i];
11            max_ending = max(max_ending + nums[i], nums[i]);
12            max_sum = max(max_sum, max_ending);
13
14            min_ending = min(min_ending + nums[i], nums[i]);
15            min_sum = min(min_sum, min_ending);
16        }
17        if(max_sum < 0){
18            return max_sum;
19        }
20        return max(max_sum, total_sum - min_sum);
21    }
22};