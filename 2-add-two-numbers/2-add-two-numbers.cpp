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
        int length(ListNode *l){long int a=0;
                while(l!=NULL){
                 l=l->next;
                 a++;       
                
                }
              return  a;                
        }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
             if (l1 == NULL)
            return l2;
        
        if (l2 == NULL)
            return l1;
       ListNode *a,*b;
            //cout<<u.val;
            int sum=0,carry=0,k=0,p=length(l1),q=length(l2);
            if(p>q){
                a=l1,b=l2;
                
            }
            else{
               a=l2;b=l1;  
                    p=length(l2);
                    q=length(l1);
            }
            
            
            
            
            while(a->next!=NULL and b->next!=NULL){
            sum=a->val+b->val+carry;
                    if(sum>=0 and sum<=9){
                            a->val=sum;cout<<sum<<carry<<endl;
                            carry=0;
                    }
                    else if(sum>9){
                            a->val=sum%10;
                            carry=sum/10;cout<<sum<<carry<<endl;
                    }
            a=a->next;
            b=b->next;k++;
            }
            sum=a->val+b->val+carry;carry=0;
            if(sum>=0 and sum<=9){cout<<sum<<"g"<<a->val<<b->val<<carry<<endl;
                    a->val=sum;
                    carry=0;k++;
            }
            else if(sum>9 and p-1>k)
            {
                    a->val=sum%10;
                    carry=sum/10;k++;cout<<"h"<<sum;
            }
            else if(sum>9 and p-1==k){
                    a->val=sum%10;cout<<"i"<<sum;
                    ListNode *g=new ListNode;g->val=sum/10;k++;
              carry=0;
                   
                    //u.val=g;
                    a->next=g;
                    
            }
            
            cout<<p<<q<<k<<carry<<endl;
            if(p>k)
            {       a=a->next;
                    while(a->next!=0){
                     sum=a->val+carry;
                            if(sum<10){
                                    a->val=sum;
                                    carry=0;k++;
                            }
                            else{
                                    a->val=sum%10;
                                    carry=sum/10;k++;
                            }
                    a=a->next;
                     }    
                   
                    sum=a->val+carry;carry=0;
            if(sum>=0 and sum<=9){
                    a->val=sum;
                    carry=0;k++;
            }
            else if(sum>9)
            {
                    a->val=sum%10;
                    ListNode *g=new ListNode;g->val=sum/10;k++;
                   
                    //u.val=g;
                    a->next=g;
            }
                    
            }
  
    
            if(length(l1)>length(l2))
            return l1;
            
            return l2;
    }
};
//             if(q>k){b=b->next;
//                     while(b->next!=0){
//                      sum=b->val+carry;
//                             if(sum<10){
//                                     b->val=sum;
//                                     carry=0;k++;
//                             }
//                             else{
//                                     b->val=sum%10;
//                                     carry=sum/10;k++;
//                             }
//                     b=b->next;
                           
                        
//                     }
//                     sum=b->val+carry;
//             if(sum>=0 and sum<=9){
//                     b->val=sum;
//                     carry=0;k++;
//             }
//             else if(sum>9)
//             {
//                     b->val=sum%10;
//                     int g=sum/10;k++;
                   
//                     u->val=g;
//                     b->next=u;
//             }
//             }
            
          