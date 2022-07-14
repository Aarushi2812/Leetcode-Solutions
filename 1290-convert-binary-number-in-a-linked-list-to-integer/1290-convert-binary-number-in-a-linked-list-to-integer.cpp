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
        int length(ListNode *head){
                ListNode * temp=head;int c=0;
                while(temp!=NULL){
                        temp=temp->next;
                        c++;
                }
                return c;
                
        }
    int getDecimalValue(ListNode* head) {
            int c=length(head)-1;ListNode* temp=head;
            //cout<<l;
            int sum=0;
            while(temp->next!=NULL){
                    sum=sum+(temp->val * pow(2,c));
                    c--;
                    temp=temp->next;
            }
            
            sum+=temp->val * pow(2,c);
        return sum;;
            
    }
};