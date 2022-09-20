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
        int count(ListNode* head){
                int i=0;
                if(head==NULL){
                        return i;
                }
                while(head!=NULL){
                        i++;
                        head=head->next;
                }
                return i;
        }
    ListNode* swapNodes(ListNode* head, int k) {
           int l=count(head);
           int m=l-k+1;
           ListNode* one = new ListNode;
           ListNode* sec = new ListNode;
           ListNode* temp=head;
            l=0;
            while(temp!=NULL){
                 l++;
                    if(l==k){
                        one=temp;    
                    }
                    if(l==m){
                        sec=temp;
                    }
                    temp=temp->next;
                    
            }
            m=one->val;
            one->val=sec->val;
            sec->val=m;
            
           return head;
        
    }
};