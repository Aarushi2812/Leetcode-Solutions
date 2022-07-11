class Solution {
public:
     
    int maximum69Number (int num) {
            if(num==9999||num==999||num==99||num==9){
                    return num;
            }
            // if(num==6666){
            //         return 6666;
            // }
            // else if(num==666){
            //         return 999;
            // }
            // else if(num==66){
            //         return 99;
            // }
            // else
     string arr[4];
            char r;
            string s="",a="";
            for(int i=0; i<4;i++){ 
              r=num%10+48;
              s=r+s;
              num=num/10;
            }
          // 
            a=s;
            for(int i=0; i<s.length() ; i++){
              if(s[i]=='9'){
                      a[i]='6';
              }
                    else if(s[i]=='6')
                            a[i]='9';
                    
                    arr[i]=a;
                    a=s;
            }
            for(int i=0; i<4; i++){
                    cout<<arr[i]<<endl;
            }
            a=arr[0];
            for(int i=1; i<4; i++){
                    if(arr[i]>a){
                            a=arr[i];
                    }
            }
            int j;
            for(int i=0; i<4; i++){
                    j=a[i]-'0';//cout<<j<<endl;
                    num=num*10+j;
            }
                 
     return num;       
    }
};