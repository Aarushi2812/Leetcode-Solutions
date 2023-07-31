//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    int high = n-1;
	    int low = 0;
	    int mid = 0;
	    int first = -1;
	    while(low <= high){
	        mid = low + (high - low )/2;
	        if(arr[mid] == x){
	            first = mid;
	            high = mid-1;
	        }
	        else if(arr[mid] > x){
	            high = mid-1;
	        }
	        else{
	            low = mid + 1;
	        }
	    }
	    if(first == -1){
	        return 0;
	    }
	    
	    low = 0; 
	    high = n-1;
	    int sec = n;
	    while(low <= high){
	        mid = low +(high-low)/2;
	        if(arr[mid] == x){
	            sec = mid;
	            low = mid+1;
	        }
	        else if(arr[mid] > x){
	            high = mid -1;
	        }
	        else{
	            low = mid+1;
	        }
	    }
	    return sec-first+1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends