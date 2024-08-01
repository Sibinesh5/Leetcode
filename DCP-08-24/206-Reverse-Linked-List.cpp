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
    ListNode* reverseList(ListNode* head) {
        ios_base::sync_with_stdio(false);
        if (head == nullptr)
            return head;
        struct ListNode* node = head;
        struct ListNode* temp = node;
        struct ListNode* ptr;
        node = node->next;
        temp->next = NULL;
        temp->next = ptr;
        ptr = temp;
        while (node) {
            struct ListNode* temp = node;
            node = node->next;
            temp->next = NULL;
            temp->next = ptr;
            ptr = temp;
        }
        return ptr;
    }
};