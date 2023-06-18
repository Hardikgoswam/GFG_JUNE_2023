//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int distributeTicket(int N, int K) {
        // code here
        int ans = N/K;
        int rem = N%K;
        int count = 0;
        if(ans == 1) // first queue ko ticket milege 
        {
            if(rem == 0) 
            return K;  //rem zero matlb first wali queue ka last person
            return K+1;  //rem zero nhi matlb first wali queue ka last+1 person
        }
        else if(ans % 2 == 0){//even ka meaning pichhe se ticket batange
           count  = ans /2 ;
           if(rem == 0)
           return (count*K)+1;//rem zero matlb first wali queue k baar hone ke baad last+1 person
           return (count*K)+rem;//rem zero nhi matlb fist wali queue k baar hone ke baad + rem = person
        }
        else{     //odd ka meaning aage se ticket batange
           count  = ans /2 ;
           count++;
           if(rem == 0 )
           return (count*K);//rem zero matlb first wali queue k baar hone ke baad last person
           return (count*K)+1;//rem zero nhi matlb first wali queue k baar hone ke baad last+1 person
        }
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends