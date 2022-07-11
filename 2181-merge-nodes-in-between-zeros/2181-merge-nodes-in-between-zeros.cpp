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
    ListNode* mergeNodes(ListNode* head) {
            ListNode *a=head,*b=head;
            int sum=0;
            while(a->next!=NULL){
                    if(a->val!=0){
                            sum+=a->val;
                            b->val=sum;
                    }
                    if(a->next->val==0){
                            b->next=a->next;
                    }
                    if(a->val==0){ 
                          //  b->next=a;      
                            b=a;
                           sum=0;
                            
                    }
                    a=a->next;
                    
            }cout<<a->val<<b->val;
           // b=a;
            b->next=NULL;
            return head;
        
    }
};