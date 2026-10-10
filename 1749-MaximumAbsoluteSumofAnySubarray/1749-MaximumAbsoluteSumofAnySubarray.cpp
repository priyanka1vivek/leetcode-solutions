// Last updated: 10/10/2026, 12:33:18 PM
1class Solution {
2public:
3    int maxAbsoluteSum(vector<int>& arr) {
4        int n = arr.size();
5        int max_ending = arr[0], max_sum = arr[0];
6        int min_ending = arr[0], min_sum = arr[0];
7
8        for(int i = 1;i < n; i++){
9            max_ending = max(max_ending + arr[i], arr[i]);
10            max_sum = max(max_sum, max_ending);
11
12            min_ending = min(min_ending + arr[i], arr[i]);
13            min_sum = min(min_sum, min_ending);
14        }
15        return max(abs(max_sum), abs(min_sum));
16    }
17};