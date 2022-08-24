class Solution {
public:
    bool isPowerOfThree(int n) {
       // if(n==0){
       //          return false;
       //  }
       //      while(n!=1){
       //              if(n%3!=0){
       //                      return false;
       //              }
       //              n=n/3;
       //      }
       // return true; 
            int a=pow(3,19);
            //cout<<a<<endl;
            return n>0 and a%n==0;
            
    }
};