#User function Template for python3

class Solution:
    def sumOfNaturals(self, n):
        # code here 
        b = (10**9)+7
        x = ((n%b)*((n%b)+1))//2;
        return x%b
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        n = int(input())
        
        ob = Solution()
        print(ob.sumOfNaturals(n))
# } Driver Code Ends