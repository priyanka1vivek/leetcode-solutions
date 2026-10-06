// Last updated: 10/6/2026, 11:59:10 PM
1class Solution {
2public:
3    void sortColors(vector<int>& nums) {
4        int n = nums.size();
5        int low = 0;
6        int mid = 0;
7        int high = n-1;
8        while(mid <= high){
9            if(nums[mid]==0){
10                swap(nums[low],nums[mid]);
11                low++;
12                mid++;
13            }
14            else if(nums[mid]==1){
15                mid++;
16            }
17            else{
18                swap(nums[mid], nums[high]);
19                high--;
20            }
21        }
22    }
23};