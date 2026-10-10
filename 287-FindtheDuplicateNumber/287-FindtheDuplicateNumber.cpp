// Last updated: 10/10/2026, 10:58:29 AM
1class Solution {
2public:
3    int findDuplicate(vector<int>& nums) {
4        int slow = 0;
5        int fast = 0;
6        while(true){
7            slow = nums[slow];
8            fast = nums[nums[fast]];
9            if(slow == fast){
10                break;
11            }
12        }
13        slow = 0;
14        while(slow != fast){
15            slow = nums[slow];
16            fast = nums[fast];
17        }
18        return slow;
19    }
20};