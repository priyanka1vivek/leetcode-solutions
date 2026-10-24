// Last updated: 10/24/2026, 3:03:06 PM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* deleteDuplicates(ListNode* head) {
14        ListNode* res = head;
15        while(head && head->next){
16            if(head->val == head->next->val){
17                head->next = head->next->next;
18            }
19            else{
20                head = head->next;
21            }
22        }
23        return res;
24    }
25};