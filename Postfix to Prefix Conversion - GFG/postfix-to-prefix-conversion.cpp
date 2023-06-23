//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string postToPre(string s) {
        // Write your code here
        stack<string> st;
        for(int i=0; i<s.size(); i++){
            if(s[i]!='^' and s[i]!='*' and s[i]!='/' and s[i]!='+' and s[i]!='-' ){
                string a(1, s[i]);
                st.push(a);
            }
            else{
                string a = st.top(); st.pop();
                string b = st.top(); st.pop();
                st.push(s[i] + b+ a);
            }
        }
        return st.top();
    }
};

//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string postfix;
        cin >> postfix;

        // char marker; cin >> marker;

        Solution obj;
        cout << obj.postToPre(postfix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends