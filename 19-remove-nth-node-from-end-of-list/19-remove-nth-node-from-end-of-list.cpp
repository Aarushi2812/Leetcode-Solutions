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
           if(head==NULL || head->next==NULL and n==1){
                   return NULL;
           } 
if(head->next->next==NULL and n==2){
 //      return head->next;
}
        ListNode* temp=head;
        ListNode* temp1=head;  
        ListNode* temp2=head;     
            int c=0;
            while(c!=n){
                    c++;
                    temp=temp->next;
            }
            if(temp==NULL){
                    return head->next;
            }
            temp=temp->next;
            temp1=temp1->next;
            while(temp!=NULL){
                    temp=temp->next;
                    temp1=temp1->next;
                    temp2=temp2->next;
            }
            temp2->next=temp1->next;
            
            return head;
    }
};