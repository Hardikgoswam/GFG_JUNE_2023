#User function Template for python3

class Solution:
    def klengthpref(self,arr,n,k,s):
        # return list of words(str) found in the board
        size = len(s)
        if(size < k):
            return 0;
        l1 =[]
        for i in arr:
            l1.append(i[:k])
        s1 = s[:k]
        count = 0
        for i in l1:
            if s1 in i:
                count+=1;
        return count;            
                
# } Driver Code Ends
#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == "__main__":
    t=int(input())
    for _ in range(t):
        n=int(input())
        arr = []
        for x in range(n):
            s1 = input()
            arr.append(s1)
        k = int(input())
        s = input()
        obj = Solution()
        print(obj.klengthpref(arr,n,k,s))
        
        
# } Driver Code Ends