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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* first = head;
        ListNode* second = head;

        if(head->next == nullptr){
            return nullptr;
        }

        while(n--){
            first = first->next;
        }

        if(first == nullptr){
            head = head->next;
            return head;
        }

        while(first->next != nullptr){
            second = second->next;
            first = first->next;
        }

        second->next = second->next->next;

        return head;

    }
};