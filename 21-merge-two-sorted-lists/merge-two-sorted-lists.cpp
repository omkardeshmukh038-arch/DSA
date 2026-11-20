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
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        

        if(temp1 == NULL) return temp2;
        if(temp2 == NULL) return temp1;
        ListNode* head = nullptr;
        if(temp1->val > temp2->val){
            head = temp2;
            temp2 = temp2->next;
        }else{
            head = temp1;
            temp1 = temp1->next;
        }
        ListNode* headnext = head;
        while(temp1 != NULL && temp2 != NULL){
            if(temp1->val > temp2->val){
                headnext->next = temp2;
                temp2 = temp2->next;
            }else{
                headnext->next = temp1;
                temp1 = temp1->next;
            }

            headnext = headnext->next;
        }

        if(temp1 != NULL){
            headnext->next = temp1;
        }else{
            headnext->next = temp2;
        }

        return head;
        
    }
};