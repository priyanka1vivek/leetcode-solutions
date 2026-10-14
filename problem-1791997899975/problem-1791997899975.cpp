// Last updated: 10/14/2026, 10:41:39 PM
1class Solution {
2public:
3    bool isValid(string s) {
4       stack<char> st;
5       for(int i = 0;i < s.size(); i++){
6        char c = s[i];
7        if(c == '(' || c == '{' || c == '['){
8            st.push(c);
9        }
10        else{
11            if(st.empty()) return false;
12            if(c == ')' && st.top() == '('){
13                st.pop();
14            }
15            else if(c == '}' && st.top() == '{'){
16                st.pop();
17            }
18            else if(c == ']' && st.top() == '['){
19                st.pop();
20            }
21            else{
22                return false;
23            }
24            
25        }
26       } return st.empty();
27    }
28};