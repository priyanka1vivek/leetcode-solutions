// Last updated: 10/6/2026, 11:44:33 PM
1class Solution {
2public:
3    int totalFruit(vector<int>& nums) { //nums=fruits
4        int n = nums.size();
5        int low = 0;
6        int res = 0;
7        unordered_map<int , int> f;
8        int k = 2;
9        for(int high = 0; high < n; high ++){
10            f[nums[high]]++;
11
12            while(f.size() > k){
13                f[nums[low]]--;
14                if(f[nums[low]]==0){
15                    f.erase(nums[low]);
16                }
17                low++;
18            }
19            int len = high - low +1;
20            res = max(res, len);
21        }
22        return res;
23    }
24};