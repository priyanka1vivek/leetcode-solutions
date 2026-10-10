// Last updated: 10/10/2026, 10:49:42 AM
1class Solution {
2public:
3    int subarraySum(vector<int>& nums, int k) {
4        int n = nums.size();
5        int sum = 0;
6        int res = 0;
7        unordered_map<int, int> f;
8        f[0] = 1;
9
10        for(int i = 0;i < n;i++)
11        {
12            sum+= nums[i];
13            int ques = sum - k;
14            int freq = f[ques];
15            res+= freq;
16            f[sum]++;
17        }
18        return res;
19    }
20};