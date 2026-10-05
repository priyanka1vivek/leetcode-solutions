// Last updated: 10/5/2026, 1:13:48 PM
1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5        vector<vector<int>> res;
6        int n = nums.size();
7
8        for(int i = 0; i < n - 2; i++) {
9            if(i > 0 && nums[i] == nums[i - 1])
10                continue;
11
12            int left = i + 1;
13            int right = n - 1;
14            int sum = -1 * nums[i];
15
16            while(left < right) {
17                int s = nums[left] + nums[right];
18
19                if(s == sum) {
20                    res.push_back({nums[i], nums[left], nums[right]});
21
22                    left++;
23                    right--;
24
25                    while(left < right && nums[left] == nums[left - 1])
26                        left++;
27
28                    while(left < right && nums[right] == nums[right + 1])
29                        right--;
30                }
31                else if(s < sum)
32                    left++;
33                else
34                    right--;
35            }
36        }
37
38        return res;
39    }
40};