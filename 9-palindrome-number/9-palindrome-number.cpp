class Solution {
public:
    bool isPalindrome(int x)
    {
       if(x>=0)
       { 
        long long int n=x,sum=0,r;
        while(true)
        {
           r=n%10;
           n=n/10;
           sum=(sum*10)+r;
            if(n==0)break;
        }
        if(x==sum)
        {
            return true;
        }
       else
            return false;
        
    }
    
    else
            return false;
    }
};