//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int sum_of_square(int num){
        int sum=0;
        while(num!=0){
           sum+= (num % 10) * (num % 10);
           num = num/10;
        }
        return sum;
    }
    int solve(int N,int num,map<int,bool>&mp){
     
        if(num == 1)
        return N;
        if(mp[num] == false){
            mp[num] = true;
            num = sum_of_square(num);
            solve(N,num,mp);
        }        
        else{
          solve(N+1,N+1,mp);
        }  
    }  
    int nextHappy(int N){
       
        int num = N;
        map<int,bool>mp;
        return solve(N+1,num+1,mp);
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends