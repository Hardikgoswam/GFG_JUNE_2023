//{ Driver Code Starts
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

// } Driver Code Ends
/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        //Your code here
        sort(arr,arr+n);
        for(int i = 0 ; i < n -2 ; i++){
            int j = i+1;//i ke baad ka pointer
            int  k = n-1;//last pointer
            while(j<k){
                int  t = arr[i]+arr[j]+arr[k];
                if(t == 0) // t == 0  matlab mil gaya :)
                   return 1;
                else if(t>0) //t ka value zero se bada tab k ko --
                   k--;
                else
                  j++; //t ka value zero se chhota tab j ko ++
            }
          }
        return 0; //ak bhi nhi mila :(
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	Solution obj;
        if(obj.findTriplets(arr, n))
            cout<<"1"<<endl;
        else 
            cout<<"0"<<endl;
	}
    return 0;
}
// } Driver Code Ends