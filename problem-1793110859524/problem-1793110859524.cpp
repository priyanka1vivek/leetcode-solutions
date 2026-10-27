// Last updated: 10/27/2026, 7:50:59 PM
1class Solution {
2public:
3    vector<string> generateParenthesis(int n) {
4        vector<string> res;
5        string temp = "";
6        backtrack(0,0,n,temp,res);
7        return res;
8    }
9    void backtrack(int open, int close, int n, string &temp, vector<string>& res){
10        if(open == n && close == n){
11            res.push_back(temp);
12            return;
13        }
14        if(open<n){
15            temp.push_back('(');
16            backtrack(open+1, close,n, temp, res);
17            temp.pop_back();
18        }
19        if(close<open){
20            temp.push_back(')');
21            backtrack(open,close+1,n,temp,res);
22            temp.pop_back();
23        }
24    }
25};