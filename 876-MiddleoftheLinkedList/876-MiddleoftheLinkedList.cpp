// Last updated: 10/8/2026, 2:33:15 PM
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
13    ListNode* middleNode(ListNode* head) {
14        ListNode* slow = head;
15        ListNode* fast = head;
16        while(fast != nullptr && fast->next != nullptr){
17            slow = slow->next;
18            fast = fast->next->next;
19
20        }
21        return slow;
22        
23    }
24};