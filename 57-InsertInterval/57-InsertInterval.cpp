// Last updated: 10/11/2026, 11:23:57 PM
1class Solution {
2public:
3    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
4        vector<vector<int>> temp;
5        bool insert_flag = false;
6        for(int i = 0;i < intervals.size(); i++){
7            int start = intervals[i][0];
8            if(insert_flag == false && start >= newInterval[0]){
9                temp.push_back(newInterval);
10                insert_flag = true;
11            }
12            temp.push_back(intervals[i]);
13        }
14        if(insert_flag == false){
15            temp.push_back(newInterval);
16        }
17        vector<vector<int>> res;
18        int n = temp.size();
19        if(n == 0) return res;
20        int start1 = temp[0][0];
21        int end1 = temp[0][1];
22
23        for(int i = 1;i < n;i++){
24            int start2 = temp[i][0];
25            int end2 = temp[i][1];
26            if(end1 >= start2){
27                end1 = max(end1, end2);
28                continue;
29            }
30            res.push_back({start1, end1});
31            start1 = start2;
32            end1 = end2;
33
34        }
35        res.push_back({start1, end1});
36        return res;
37    }
38    
39};