// Last updated: 10/11/2026, 11:16:39 PM
1class Solution {
2public:
3    vector<vector<int>> merge(vector<vector<int>>& intervals) {
4        vector<vector<int>>& a = intervals;
5        int n = a.size();
6        if(n == 0) return{};
7
8        sort(a.begin(), a.end());
9        vector<vector<int>> res;
10        int start1 = a[0][0];
11        int end1 = a[0][1];
12
13        for(int i = 1;i < n; i++){
14            int start2 = a[i][0];
15            int end2 = a[i][1];
16
17            if(end1 >= start2){
18                start1 = start1;
19                end1 = max(end1, end2);
20                continue;
21            }
22            res.push_back({start1, end1});
23            start1 = start2;
24            end1 = end2;
25        }
26        res.push_back({start1, end1});
27        return res;
28    }
29};