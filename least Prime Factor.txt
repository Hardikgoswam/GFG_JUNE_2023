class Solution {
  public:
    bool isprime(int n){
      if(n == 0 || n == 1)
      return true;
      for(int  i = 2 ; i * i <= n ; i++){
         if(n % i == 0) 
         return false;
      }
       return true;
    }
    vector<int> leastPrimeFactor(int n) {
        // code here
        vector<int>ans;
        ans.push_back(0);
        ans.push_back(1);
        for(int  x = 2 ; x <= n ;x++){
            if(isprime(x))
               ans.push_back(x);
            else{
                for(int j =2  ; j < x ; j++ ){
                    if( x % j == 0){
                     ans.push_back(j);
                     break;
                    }
                }
            }   
        }
        return ans;
    }
};
//hello 09/06/2023