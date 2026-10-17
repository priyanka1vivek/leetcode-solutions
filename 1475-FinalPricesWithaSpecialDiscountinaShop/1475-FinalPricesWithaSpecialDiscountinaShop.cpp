// Last updated: 10/17/2026, 11:30:16 PM
1class Solution {
2public:
3    vector<int> finalPrices(vector<int>& prices) {
4        int n = prices.size();
5        vector<int> res = prices;
6        stack<int> st;
7        
8        for (int i = n - 1; i >= 0; i--) {
9            while (!st.empty() && st.top() > prices[i]) {
10                st.pop();
11            }
12            if (!st.empty()) {
13                res[i] = prices[i] - st.top();
14            }
15            st.push(prices[i]);
16        }
17        
18        return res;
19    }
20    
21};