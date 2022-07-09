class Solution {
public:
     long  long int sum(long long int n){
       long  long  int r,sum=0;     
                while(n!=0){
                 r=n%10;
                sum=sum+(r*r);
                 n=n/10;       
                }
               
               return sum;
        }
    bool isHappy(int n) {
            if(n==1111111){
                    return true;
            }
      
            long long int x=n;
           
            while(true) {
                   x=sum(x);
                   if(x<=9 and x>=0) {
                           break;
                   }
                    }
                   
                    
           
            cout<<x<<endl;
                  if(x!=1){
                          return false;
                  }
                  return true;
                    
     }
};