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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL){
                return NULL;
        }
        if(head->next==NULL){
                return head;
        }
            
        ListNode* temp=head;  ListNode* temp2=NULL;
        head=temp->next;
            
        while(temp!=NULL){
         ListNode*  a =temp->next;
          ListNode*  b ;     
         if(a!=NULL)
         { b =a->next; 
         a->next=temp;
         temp->next=b;
          if(temp2!=NULL){
          temp2->next=a;
                }      
         temp2=temp;
         temp=b;}
                else{
                        temp=a;
                }
        }     
                
       
         return head;
            
    }
};