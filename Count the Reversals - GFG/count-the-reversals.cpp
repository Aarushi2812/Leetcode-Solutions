//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int countRev (string s)
{
    // your code here
    if(s.size()%2 !=0 ){
        return -1;
    }
    int o =0, c = 0;
    int ans =0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '{'){
            o++;
        }
        else{
            if(o == 0){
                ans++;
                o++;
            }
            else{
                o--;
            }
        }
    }
    //cout<<o<<" "<<c<<endl;
    ans+=(o/2);
    return ans ;
}