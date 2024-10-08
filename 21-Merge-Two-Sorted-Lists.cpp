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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        if (list1 == nullptr)
            return list2;
        if (list2 == nullptr)
            return list1;
        struct ListNode* node = new ListNode(min(list1->val, list2->val));
        struct ListNode* ptr = node;
        if (list1->val < list2->val) {
            list1 = list1->next;
        } else {
            list2 = list2->next;
        }
        while (list1 && list2) {
            if (list1->val < list2->val) {
                struct ListNode* temp = list1;
                node->next = temp;
                list1 = list1->next;
                node = node->next;
            } else {
                struct ListNode* temp = list2;
                node->next = temp;
                list2 = list2->next;
                node = node->next;
            }
        }
        while (list1) {
            struct ListNode* temp = list1;
            node->next = temp;
            list1 = list1->next;
            node = node->next;
        }
        while (list2) {
            struct ListNode* temp = list2;
            node->next = temp;
            list2 = list2->next;
            node = node->next;
        }
        return ptr;
    }
}

;