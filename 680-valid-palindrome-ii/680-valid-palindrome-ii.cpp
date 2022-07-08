class Solution {
public:
    bool check(int i, int j,string s){
          cout<<i<<j<<endl;
            while(i<=j){
                    if(s[i]==s[j]){
                            i++;
                            j--;
                    }
                    else 
                    {
                            return false;
                    }
            }
            return true;
            }
        
        bool validPalindrome(string s) {        
     int j=s.length()-1;
                for(int i=0; j>i; ){
                        if(s[i]==s[j]){cout<<"g"<<endl;
                                j--;
                                i++;
                        }
                        else {
                         if(check(i+1,j,s)){cout<<"a"<<endl;
                                 return true;
                         }
                        else if(check(i,j-1,s)){cout<<"b"<<endl;
                           return true;     
                        }
                        else{cout<<"c"<<endl;
                                return false;
                        }
                        }
                        
                }
                
         return true;   
           
    }
};