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
        int length(ListNode* head){
            ListNode* temp=head;
                int c=0;
                while (temp!=NULL){
                  c++;  
                  temp=temp->next;
                }
                return c;
        }
       ListNode* reverse(ListNode* head){
   ListNode  *p=head, *q=NULL , *r=NULL,*z;
   
    while(p!=NULL){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
     
    return q;
        }
        bool isPalindrome(ListNode* head) {
        int len=length(head);
          ListNode* temp=head; 
                int c=0;
                while(c!=len/2){
                   c++;
                   temp=temp->next;
                }
            temp=reverse(temp);
                while(temp!=NULL and head!=NULL){cout<<"a"<<endl;
                        if(temp->val!=head->val){
                                return false;
                        }
                     temp=temp->next;
                     head=head->next;                            
                }
                
                
                return true;
        }
};