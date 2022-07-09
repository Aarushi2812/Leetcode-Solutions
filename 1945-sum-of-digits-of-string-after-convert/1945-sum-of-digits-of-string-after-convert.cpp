class Solution {
public:
        int sum(int n){
           int j=0,r;
                while(n!=0){
                   r=n%10;
                   j=j+r;
                   n=n/10;     
                }
                return j;
        }
    int getLucky(string s, int k) {
    int tot=0;
            for(int i= 0; i<s.length(); i++){
                    
                  tot+=sum(s[i]-'a'+1);
                   
                   
            } 
           cout<<tot<<endl;
            
      int i=1,n=tot;int r;
     //   int    sum=0;
            while(k!=i){
                 n=sum(n);
                    i++;
            }
            cout<<n<<endl;
          //  n=(int)n
        return n; 
    }
};