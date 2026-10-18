// Last updated: 10/18/2026, 8:00:07 PM
1class Solution {
2public:
3    vector<int> dailyTemperatures(vector<int>& a) {
4        int n = a.size();
5        stack<int> st;
6        vector<int> res(n);
7        
8        // Pre-initialize the last element[cite: 10]
9        res[n - 1] = 0;
10        st.push(n - 1);
11        
12        // Loop from n-2 down to 0[cite: 10]
13        for (int i = n - 2; i >= 0; i--) {
14            while (!st.empty() && a[st.top()] <= a[i]) {
15                st.pop();
16            }
17            
18            if (st.empty()) {
19                res[i] = 0;
20            } else {
21                res[i] = st.top() - i;
22            }
23            
24            st.push(i);
25        }
26        
27        return res;
28    }
29    
30};