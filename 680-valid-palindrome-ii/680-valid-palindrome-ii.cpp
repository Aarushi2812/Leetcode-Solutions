class Solution {
public:
    bool validPalindrome(string s) {
        int n= s.length();
        // i and j are two pointers to check palindrome
        int i=0, j=n-1;
        
        while(i<=j){
            if(s[i]!=s[j]) break;
            i++; j--;
        }
        if(i>j) return true;//already palindrme
        
        //not palindrome so
        //delete char at i(i.e. d0 i++) and check whether it beomes palindrome
        int newi=i+1, newj=j;
        while(newi<=newj){
            if(s[newi]!=s[newj])  break;
            newi++; newj--;
        }
        if(newi>newj) return true; 
        
        //delete char at j(i.e. do j--) and check whether it beomes palindrome
        newi=i; newj=j-1;
        while(newi<=newj){
            if(s[newi]!=s[newj])  return false;
            newi++; newj--;
        }
        return true;
    }
};