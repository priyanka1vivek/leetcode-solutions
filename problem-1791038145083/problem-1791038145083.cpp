// Last updated: 10/3/2026, 8:05:45 PM
1class Solution {
2public:
3    vector<int> sortedSquares(vector<int>& nums) {
4        int n=nums.size();
5        int start=0;
6        int end=n-1;
7        vector<int> res(n);
8        int pos=n-1;
9        while(start<=end){
10            if(abs(nums[start]) < abs(nums[end])){
11                res[pos--]=nums[end]*nums[end];
12                end--;
13            }else{
14                res[pos--]=nums[start]*nums[start];
15                start++;
16            }
17        }
18        return res;
19    }
20
21};