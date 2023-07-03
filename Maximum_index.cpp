//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int maxIndexDiff(int arr[], int n) { 
        vector<int>left_min(n,0);
        vector<int>right_max(n,0);
        left_min[0]=(arr[0]);
        right_max[n-1]=(arr[n-1]);
        for(int i = 1 ; i < n ; i++){
            left_min[i] = min(left_min[i-1],arr[i]);   
            right_max[n-i-1] = max(right_max[n-i],arr[n-i-1]);  
        }
        int i= 0,j = 0,maxdiff =0;
        while(i < n && j < n){
             if(left_min[i]<=right_max[j]){
                 maxdiff = max(maxdiff,j-i);
                 j++;
             }
             else{
                i++;
             }
        }
        return maxdiff;
    }    
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends