class Solution {
public:
    int reverse(int x) {
        
        long long ans = 0, range= pow(2,31);
    int r,n=x;
        while(n!=0){
            r=n%10;
            n=n/10;
            ans=ans*10 +r;
        }
        if(ans>range-1 || ans< -range){
            return 0;
        }
        return ans;
        
    }
};