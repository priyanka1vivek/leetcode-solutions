// Last updated: 10/13/2026, 10:50:20 AM
1class Solution {
2public:
3    string makeGood(string s) {
4        stack<char> st;
5        int n = s.size();
6        for(int i = 0;i < n;i++){
7            if(st.empty()){
8                st.push(s[i]);
9                continue;
10            }
11            if(abs(st.top() - s[i]) == 32){
12                st.pop();
13
14            } else {
15                st.push(s[i]);
16            }
17        }
18        string res = "";
19        while(!st.empty()){
20            res.push_back(st.top());
21            st.pop();
22        }
23        reverse(res.begin(), res.end());
24        return res;
25    }
26};