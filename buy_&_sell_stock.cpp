//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    int stockBuyAndSell(int n, vector<int> &prices) {
        // code here
        int max_profit = 0;
        int pocket = 0;
        // bool flag = true;
        int  i  = 0 ; 
        int  j  = 0 ;
        while(i<n && j<n){
            if(prices[i] <= prices[j]){
                if(max_profit > prices[j]-prices[i]){
                    pocket+=max_profit;
                    max_profit = 0 ;
                    i = j;
                    j--;            
                }
                else{
                    max_profit = prices[j]-prices[i];
                }
                j++;
            }
            else{
                // flag = false;
                pocket+=max_profit;
                max_profit = 0;
                i = j;
            }
        }       
                pocket+=max_profit;
                return pocket ;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        vector<int> prices(n);
        Array::input(prices,n);
        
        Solution obj;
        int res = obj.stockBuyAndSell(n, prices);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends