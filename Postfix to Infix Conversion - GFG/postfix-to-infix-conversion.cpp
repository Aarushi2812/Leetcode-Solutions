//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string postToInfix(string exp) {
        // Write your code here
        stack<string> st;
        string ans;
        for(int i=0; i<exp.size(); i++){
            if(exp[i]!='^' and exp[i]!='*' and exp[i]!='/' and  exp[i]!='+' and  exp[i]!='-' ){
                string a (1, exp[i]);
                st.push(a);
            }
            else{
                string a = st.top();
                st.pop();
                string b = st.top();
                st.pop();
                st.push("("+b + exp[i] + a +")");
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
        cout << obj.postToInfix(postfix) << endl;

        // cout << "~\n";
    }
    fclose(stdout);

    return 0;
}

// } Driver Code Ends