// Last updated: 10/6/2026, 11:34:07 PM
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        if(s.empty()) return 0;
5        int n = s.length();
6        int low = 0;
7        int res = INT_MIN;
8        unordered_map<char, int> f;
9        for(int high = 0; high < n; high ++){
10            f[s[high]]++;
11            int k = high - low +1;
12
13            while(f.size() < k){
14                f[s[low]]--;
15                if(f[s[low]]==0){
16                    f.erase(s[low]);
17                }
18                low++;
19                k = high - low + 1;
20            }
21            int len = high - low + 1;
22            res = max(res, len);
23        }
24        return res;
25    }
26};