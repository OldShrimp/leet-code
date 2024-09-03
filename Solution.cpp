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
        ListNode* sum = new ListNode();
        ListNode* sumCurrent = sum;
        while (l1 || l2) {
            int n1 = 0, n2 = 0;
            if (l1) {
                sumCurrent->val += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                sumCurrent->val += l2->val;
                l2 = l2->next;
            }
            if (sumCurrent->val > 9) {
                sumCurrent->val -= 10;
                sumCurrent->next = new ListNode(1);
            }
            else
                if (l1 || l2)
                    sumCurrent->next = new ListNode();
            sumCurrent = sumCurrent->next;
        }
        return sum;
    }
};