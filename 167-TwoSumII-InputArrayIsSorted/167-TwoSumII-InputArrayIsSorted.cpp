// Last updated: 10/4/2026, 11:04:16 PM
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& numbers, int target) {
4        int i=0;
5        int j=numbers.size()-1;
6        while(i<j){
7            int sum=numbers[i]+numbers[j];
8
9            if(sum==target){
10                return {i+1, j+1};
11            }
12            else if(sum<target){ i++;}
13            else {
14                j--;
15            }
16        }
17        return {-1,-1};
18    }
19};