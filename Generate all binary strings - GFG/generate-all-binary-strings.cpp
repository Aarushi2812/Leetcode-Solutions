//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void generate(int n, string curr, int flag){
        //cout<<n<<" "<< curr<<" "<<flag<<endl;
        if(n == 0){
            cout<<curr<<" ";
            return;
        }
        if(flag == 1){
            curr = curr+'0';
            generate(n-1, curr, 0);
            return;
        }
        string curr1 = curr+'0';
        generate(n-1, curr1, 0);
        curr += '1';
        generate(n-1, curr, 1);
    }
    void generateBinaryStrings(int n){
        //Write your code
        generate(n, "", 0);
    }
};

//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        obj.generateBinaryStrings(n);
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends