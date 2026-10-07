// Last updated: 10/7/2026, 11:46:53 PM
1class Solution {
2public:
3    int find(const vector<int>& f){
4        int max_val = 0;
5        for(int val : f){
6            max_val = max(max_val, val);
7        }
8        return max_val;
9    }
10    int characterReplacement(string s, int k) {
11        int n = s.length();
12        int low = 0;
13        int res = INT_MIN;
14        vector<int> f(256,0);
15
16        for(int high = 0; high < n; high++){
17            f[s[high]]++;
18            int len = high - low + 1;
19            int maxcnt = find(f);
20            int diff = len - maxcnt;
21
22            while(diff > k){
23                f[s[low]]--;
24                low++;
25                maxcnt = find(f);
26                len = high - low + 1;
27                diff = len - maxcnt;
28            }
29            len = high - low + 1;
30            res = max(res, len);
31        }
32        return(res == INT_MIN)? 0 : res;
33    }
34};