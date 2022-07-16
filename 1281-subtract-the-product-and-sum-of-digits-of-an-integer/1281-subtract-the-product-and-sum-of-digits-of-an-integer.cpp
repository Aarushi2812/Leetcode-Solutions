class Solution {
public:
        int add(int n){
                int r, sum=0;
                for(int i=0; n!=0 ; i++){
                        r=n%10;
                        n=n/10;
                        sum=sum+r;
                }
                return sum;
        }
        int mul(int n){
                int r, sum=1;
                for(int i=0; n!=0; i++ ){
                        r=n%10;
                        n=n/10;
                        sum=sum*r;
                }
                return sum;
                        
        }
    int subtractProductAndSum(int n) {
        cout<< add(n)<<mul(n)<<endl;
            return mul(n)-add(n);
    }
};