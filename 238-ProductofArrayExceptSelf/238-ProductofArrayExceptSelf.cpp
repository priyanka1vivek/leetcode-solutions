// Last updated: 10/24/2026, 4:07:25 PM
1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4        int n = nums.size();
5        vector<int> res(n,1);
6        int leftProd = 1; 
7        for(int i = 0;i < n; i++){
8            res[i] = leftProd;
9            leftProd *= nums[i];
10        }
11        int rightProd = 1;
12        for(int i = n-1; i>=0; i--){
13            res[i] *=rightProd;
14            rightProd *= nums[i];
15        }
16        return res;
17    }
18};