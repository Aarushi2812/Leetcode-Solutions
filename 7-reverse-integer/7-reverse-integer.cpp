class Solution {
public:
    int reverse(int x) {
        
        long long ans = 0;
        int mult = 0,num = x,n;
        num = x;
        while(num!=0)
        {
            n = num%10;
            num /=10;
            if((ans>INT_MAX/10) || (ans<INT_MIN/10)) return 0; 
            ans*=10;
            ans+=n;
        }
        return ans;
    }
};