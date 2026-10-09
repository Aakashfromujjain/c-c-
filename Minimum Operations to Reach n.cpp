class Solution {
  public:
   
    int solve(int i, int& n, vector<int>& dp) {
        
        if (i == n) {
            return 0;
        }
        
        if (i > n) {
            return 1e9;
        }
        
        if (dp[i] != -1) {
            return dp[i];
        }
        
        int op1 = 1e9;
        if (i != 0) {
            op1 = 1 + solve(2* i, n, dp);
        }
        int op2 = 1 + solve(i+1, n, dp);
        
        return dp[i] = min(op1, op2);
    }
    int minOperation(int n) {
        // code here
        // vector<int> dp(n+1, -1);
        // return solve(0, n, dp);
        
        int ans = 0;
        
        while (n > 0) {
            
            if (n % 2 == 0) {
                n /= 2;
            } else {
                n--;
            }
            
            ans++;
        }
        
        return ans;
    }
};

