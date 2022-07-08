class Solution {
public:
bool isPalindrome(string s) {
string temp="";
for(int i=0;i<s.size();i++){
if(s[i]>=65&&s[i]<=90)temp+=(s[i]+32);
if(s[i]>=97&&s[i]<=122 || s[i]>='0'&&s[i]<='9')temp+=s[i];
}
cout<<temp;
int i=0,e=temp.size()-1;
while(i<e){
if(temp[i]!=temp[e])return false;
i++;
e--;
}
return true;
}
};