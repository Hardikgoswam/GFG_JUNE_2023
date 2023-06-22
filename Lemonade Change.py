#{ 
 # Driver Code Starts
#Initial Template for Python 3

# } Driver Code Ends
#User function Template for python3

class Solution:
    def lemonadeChange(self, N, bills):
        five_count = 0;
        ten_count = 0;
        for i  in bills:
            if i == 5:
                five_count+=1
            elif i == 10:
                if five_count == 0 :
                    return False
                five_count-=1
                ten_count +=1
            else:
                
                if five_count >= 1 and ten_count >= 1: 
                    ten_count-=1
                    five_count-=1
                    continue
                if five_count >= 3 and ten_count ==0:
                    five_count-=3
                    continue
                return False
        return True

#{ 
 # Driver Code Starts.
if __name__ == '__main__': 
    t = int(input ())
    for _ in range (t):
        N = int(input())
        bills = list(map(int, input().split()))
        ob = Solution()
        res = ob.lemonadeChange(N, bills)
        print(res)
# } Driver Code Ends