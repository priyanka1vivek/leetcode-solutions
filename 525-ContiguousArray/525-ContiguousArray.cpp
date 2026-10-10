// Last updated: 10/10/2026, 11:18:16 PM
1class Solution {
2public:
3    int findMaxLength(vector<int>& nums) {
4        int n = nums.size();
5        int zero = 0;
6        int one = 0;
7        unordered_map<int,int>f;
8        int res = 0;
9        f[0] = -1;
10        for(int i = 0; i < n; i++){
11            if(nums[i] == 0){
12                zero++;
13
14            } else one++;
15            int diff = zero - one;
16            
17            if(f.find(diff) == f.end()){
18                f[diff] = i;
19                
20            }
21            else{
22                int idx = f[diff];
23                int len = i - idx;
24                res = max(res, len);
25            }
26        }
27        return res;
28    }
29};