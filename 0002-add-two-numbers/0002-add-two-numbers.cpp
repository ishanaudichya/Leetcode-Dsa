/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *output = new ListNode(0);
        ListNode *tail = output;
        int carry = 0;
        while (l1!=nullptr || l2!=nullptr || carry !=0){
            int a = (l1 !=nullptr)? l1->val : 0;
            int b = (l2 !=nullptr)? l2->val : 0;
            int sum = a+b+carry;
            int number = sum%10;
            carry = sum/10;
            ListNode *add = new ListNode(number);
            tail->next = add;
            tail = tail->next;
            l1 = (l1 != nullptr) ? l1->next : nullptr;
            l2 = (l2 != nullptr) ? l2->next : nullptr;
        }
        return output->next;
    }
};