// Last updated: 10/10/2026, 12:30:01 PM
1class Solution {
2public:
3    int maximumSum(vector<int>& arr) {
4        int n = arr.size();
5        int nodelete = arr[0];
6        int onedelete = INT_MIN;
7        int res = arr[0];
8
9        for( int i = 1;i < n; i++){
10            int prev_nodelete = nodelete;
11            int prev_onedelete = onedelete;
12            nodelete = max(prev_nodelete + arr[i], arr[i]);
13            
14            if(prev_onedelete == INT_MIN){
15                onedelete = prev_nodelete;
16            } else{
17                int v2 = prev_onedelete + arr[i];
18                onedelete = max(v2, prev_nodelete);
19            }
20            res = max({ res, nodelete, onedelete});
21        }
22        return res;
23    }
24};