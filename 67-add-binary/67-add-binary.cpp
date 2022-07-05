class Solution {
public:
    string appendZeroes(string s,int n){
        string toAppend="";
        for(int i=0;i<n;i++){
            toAppend="0"+toAppend;
        }
        return toAppend+s;
    }
    string addBinary(string a, string b) {
        string sum="";
        int carry=0;
        char bitSum;
        if(a.length()>b.length()){
            b=appendZeroes(b,a.length()-b.length());
        }
        else{
            a=appendZeroes(a,b.length()-a.length());
        }
        for(int i=a.length()-1;i>=0;i--){
            if(a[i]==b[i]){
                if(carry){
                    bitSum='1';
                    carry=0;
                }
                else{
                    bitSum='0';
                }
                if(a[i]=='1'){
                    carry=1;
                }
            }
            else{
                if(carry){
                    bitSum='0';
                }
                else{
                    bitSum='1';
                }
            }
            sum=bitSum+sum;
        }
        if (carry)
            sum='1'+sum;
        return sum;
    }
};