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
    ListNode* rotateRight(ListNode* head, int k) {
        ios_base::sync_with_stdio(false);
        if (head == nullptr || head->next == nullptr)
            return head;
        struct ListNode* ptr = head;
        struct ListNode *x, *y;
        int c = 0;
        while (ptr) {
            ptr = ptr->next;
            c++;
        }
        k = k % c;
        if (k == 0)
            return head;
        ptr = head;
        for (int i = 0; i < c - k - 1; i++) {
            ptr = ptr->next;
        }
        y = x = ptr->next;
        ptr->next = nullptr;
        while (x->next)
            x = x->next;
        x->next = head;
        return y;
    }
};