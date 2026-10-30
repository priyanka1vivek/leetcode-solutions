// Last updated: 10/30/2026, 9:49:22 PM
1class Solution {
2private: 
3    bool fun(unordered_map<char,int>& have, unordered_map<char,int>& need){
4        for(auto i:need){
5            char c = i.first;
6            int fneed=i.second;
7            int fhave=have[c];
8            if(fhave<fneed){
9                return false;
10            }
11        }
12        return true;
13    }
14public:
15    bool canConstruct(string ransomNote, string magazine) {
16        unordered_map<char,int> have;
17        unordered_map<char,int> need;
18        for(int i=0;i<ransomNote.size();i++){
19            need[ransomNote[i]]++;
20        }
21        for(int i=0;i<magazine.size();i++){
22            have[magazine[i]]++;
23        }
24        return fun(have,need);
25
26        
27    }
28};