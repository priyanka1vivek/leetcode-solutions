// Last updated: 10/12/2026, 12:10:50 AM
1class Solution {
2public:
3    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
4        vector<vector<int>> res;
5        int i = 0, j = 0;
6        int n = firstList.size(), m = secondList.size();
7
8        while( i < n && j < m){
9            int start1 = firstList[i][0];
10            int end1 = firstList[i][1];
11            int start2 = secondList[j][0];
12            int end2 = secondList[j][1];
13
14            int start = max(start1, start2);
15            int end = min(end1, end2);
16
17            if(start <= end){
18                res.push_back({start, end});
19            }
20            if(end1 < end2){
21                i++;
22            } else j++;
23        }
24        return res;
25    }
26    
27};