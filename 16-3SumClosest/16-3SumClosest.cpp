// Last updated: 10/5/2026, 1:33:55 PM
1class Solution {
2public:
3    int threeSumClosest(vector<int>& nums, int target) {
4        sort(nums.begin(), nums.end());
5        int n = nums.size();
6        int max_diff = INT_MAX;
7        int res = 0;
8        for(int i = 0;i < n-2; i++){
9            if(i > 0 && nums[i] == nums[i-1])
10                continue;
11            int left= i+1;
12            int right = n-1;
13            while(left<right){
14                int sum = nums[i] + nums[left] + nums[right];
15                if(sum == target){
16                    return sum;
17                }
18                int diff = abs(sum-target);
19                if(diff < max_diff){
20                    max_diff = diff;
21                    res = sum;
22                }
23                if(sum<target) left++;
24                else right--;
25            }
26        }
27    
28    return res;
29}
30};