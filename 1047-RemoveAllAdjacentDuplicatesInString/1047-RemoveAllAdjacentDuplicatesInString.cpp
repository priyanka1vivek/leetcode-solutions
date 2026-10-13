// Last updated: 10/13/2026, 10:42:15 AM
1class Solution {
2public:
3    string removeDuplicates(string s) {
4        int n = s.size();
5        stack<char> st;
6        for(int i = 0;i < n;i++){
7            if(st.empty()){
8                st.push(s[i]);
9                continue;
10            }
11            if(st.top() ==s [i]){
12                st.pop();
13                continue;
14            }
15            st.push(s[i]);
16        }
17        string res = "";
18        while (!st.empty()){
19        res.push_back(st.top());
20        st.pop();
21    }    
22        reverse(res.begin(), res.end());
23        return res;
24    }
25};