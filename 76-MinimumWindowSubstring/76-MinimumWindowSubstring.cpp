// Last updated: 10/7/2026, 11:37:20 PM
1class Solution {
2public:
3    bool sahi(const vector<int>& have, const vector<int>&needed){
4        for(int i = 0; i < 256; i++){
5            if(have[i] < needed[i]){
6                return false;
7            }
8        }
9        return true;
10    }
11    string minWindow(string s, string t) {
12        int n = s.length();
13        vector<int> have(256,0);
14        vector<int> needed(256,0);
15
16        for(char c : t){
17            needed[c]++;
18        }
19        int low = 0;
20        int res = INT_MAX;
21        int start = -1;
22        for(int high = 0; high < n; high ++){
23            have[s[high]]++;
24            while(sahi(have, needed)){
25                int len = high - low + 1;
26                if(res > len){
27                    res = len;
28                    start = low;
29                }
30                have[s[low]]--;
31                low++;
32            }
33        }
34        return (start == -1) ? "" : s.substr(start,res);
35    }
36};