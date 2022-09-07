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
        
    int pairSum(ListNode* head) {
            if(head==NULL){
                    return 0;
            }
            vector<int> v;
            ListNode* temp=head;
            while(temp!=NULL){
                    v.push_back(temp->val);
                    temp=temp->next;
            }
            
            int i=1,j=v.size()-2;
            int sum=v[0]+v[j+1];
            while(i<j){
                    int s=v[i]+v[j];
                    if(sum<s){
                            sum=s;
                    }
                    i++;
                    j--;
            }
            return sum;
    }
};