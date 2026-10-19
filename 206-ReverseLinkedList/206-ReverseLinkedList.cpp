// Last updated: 10/19/2026, 10:11:04 PM
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
11
12class Solution {
13public:
14    ListNode* reverseList(ListNode* head) {
15        ListNode* prev = nullptr;
16        ListNode* curr = head;
17        while (curr != nullptr) {
18            ListNode* nextTemp = curr->next;
19            curr->next = prev;
20            prev = curr;
21            curr = nextTemp;
22        }
23        return prev;
24    }
25};