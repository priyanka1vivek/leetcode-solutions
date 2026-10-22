// Last updated: 10/22/2026, 9:46:33 PM
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
13    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
14        // 1. Create a dummy node to serve as the anchor for the merged list
15        ListNode* dummy = new ListNode(0);
16        ListNode* curr = dummy;
17        
18        // 2. Traverse both lists while neither is empty
19        while (list1 != nullptr && list2 != nullptr) {
20            if (list1->val <= list2->val) {
21                curr->next = list1;
22                list1 = list1->next;
23            } else {
24                curr->next = list2;
25                list2 = list2->next;
26            }
27            curr = curr->next;
28        }
29        
30        // 3. Attach whichever list still has remaining elements
31        if (list1 != nullptr) {
32            curr->next = list1;
33        } else {
34            curr->next = list2;
35        }
36        
37        // 4. Extract the true head of the merged list and clean up the dummy node
38        ListNode* mergedHead = dummy->next;
39        delete dummy;
40        
41        return mergedHead;
42    }
43};