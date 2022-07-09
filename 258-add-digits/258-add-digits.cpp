class Solution {
public:
    int addDigits(int num) {
       int r,sum=0;
      while(num!=0){
          r=num%10;
          sum=sum+r;
          num=num/10;
          
                   
          if(num==0){
            num=sum;
             sum=0;     
          }
              cout<<num<<endl;
              if(num<=9 and num>=0 and sum==0 and r!=0){
                      break;
              }
            
      }
            return num;
            
    }
};