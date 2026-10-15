// Last updated: 10/15/2026, 11:15:54 PM
1class Solution {
2public:
3    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
4        int n = nums2.size();
5        unordered_map<int, int> nextGreaterMap;
6        stack<int> st;
7
8        for(int i = n - 1;i >= 0;i--){
9            while(!st.empty() && st.top() <= nums2[i]){
10                st.pop();
11            }
12            int greater = st.empty() ? -1 : st.top();
13            nextGreaterMap[nums2[i]] = greater;
14            st.push(nums2[i]);
15        }
16        vector<int> res;
17        for(int num : nums1){
18            res.push_back(nextGreaterMap[num]);
19        }
20        return res;
21    }
22};