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
        ListNode* temp= head;
        int count = 0;
        while(temp!=NULL){
            temp = temp->next;
            count++;
        }
        int idx = count - n;
        if(idx == 0){
            head = head->next;
            return head;
        }
        ListNode* prev = NULL;
        temp = head;
        while(idx != 0 && temp!=NULL){
            prev = temp;
            temp = temp->next;
            idx--;
        }
        if(temp == NULL){
            prev->next = NULL;
        }else{
            prev->next = temp->next;
            delete temp;
        }
        
        
      
        return head;

    }
};