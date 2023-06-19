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
        ListNode* t1 = list1;
        ListNode* t2 = list2;


        if (list1 == nullptr && list2 == nullptr) {
            return nullptr;
        }
        if (list1 == nullptr) {
            return list2;
        }
        if (list2 == nullptr) {
            return list1;
        }
        
        ListNode* list3 = nullptr;
        
        if(t1->val <= t2->val){
          list3 = t1;
          t1 = t1->next;  
        }else{
           list3 = t2;
           t2 = t2->next; 
        }
        ListNode* t3 = list3;
        while(t1 != nullptr && t2 != nullptr){

            if(t1->val <= t2->val){
                t3->next = t1;
                t1 = t1->next;
            }
            else{
                t3->next = t2;
                t2 = t2->next;
            }
            t3 = t3->next;
        }

        if(t1 == nullptr) t3->next = t2;

        else t3->next = t1;

        return list3;

    }
};