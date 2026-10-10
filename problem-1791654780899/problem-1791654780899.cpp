// Last updated: 10/10/2026, 11:23:00 PM
1class Solution {
2public:
3    int subarraysDivByK(vector<int>& nums, int k) {
4        int n = nums.size();
5        int sum = 0;
6        int res = 0;
7        unordered_map<int, int> f;
8        f[0] = 1;
9        for(int i = 0;i < n; i++){
10            sum += nums[i];
11            int rem = sum % k;
12            if(rem < 0){
13                rem += k;
14            }
15        res += f[rem];
16        f[rem]++;
17        }
18        return res;
19    }
20};