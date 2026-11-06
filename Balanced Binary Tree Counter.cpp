class Solution {
  public:
    long long int countBT(int h) {
        int mod=1e9+7;
        vector<long long int> dp(h+1,0);
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=h;i++){
            dp[i]=(dp[i-1]*(2*dp[i-2]+dp[i-1]))%mod;
        }
        return dp[h];
    }
};
