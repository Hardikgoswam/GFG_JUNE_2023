#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void insert(queue<int> &q, int k){
       q.push(k);
    }
    int findFrequency(queue<int> &q, int k){
        int c = 0 ;
        int size = q.size();
        while(size != 0){
            int temp = q.front(); 
            q.pop();
            if( k== temp)
            c++;
            q.push(temp);
            size--;
        }
        return c;
    }
};

//{ Driver Code Starts.
int main() {
    
		int testcase;
		cin>>testcase;
		
		while(testcase-- > 0){
		    // Declaring Queue
		    queue<int> q;
		   
		     int n, k;
		    cin>>n;
		    // Invoking object of Geeks class
		    Solution obj;
		    
		    for(int i = 0;i<n;i++){
		        cin >> k;
		        obj.insert(q, k);
		    }
		   
		    int m;
		    cin >> m;
		    for(int i = 0;i<m;i++){
		        cin >> k;
		        int f = obj.findFrequency(q, k);
		        if(f != 0){
		            cout<<f<<endl;
		        }
		        else{
		            cout<<"-1\n";
		        }
		    }
		}
	return 0;
}
