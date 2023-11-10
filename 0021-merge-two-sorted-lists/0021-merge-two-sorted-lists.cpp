/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL) {
            return list2;
        }
        if (list2 == NULL) {
            return list1;
        }

        ListNode *output = new ListNode(0); // Initialize the output list with a dummy node.
        ListNode *point = output;

        while (list1 != NULL && list2 != NULL) {
            if (list1->val < list2->val) {
                point->next = list1;
                list1 = list1->next;
            } else {
                point->next = list2;
                list2 = list2->next;
            }
            point = point->next;
        }

        if (list1 != NULL) {
            point->next = list1;
        }
        if (list2 != NULL) {
            point->next = list2;
        }

        return output->next;
    }
};
