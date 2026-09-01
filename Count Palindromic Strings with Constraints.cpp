class Solution {
  public:
    typedef long long ll;
    int mod=1e9+7;
    int palindromicStrings(int n, int k) {
        // code here
        if(n==1) return k;
        
        ll ans=k+k;
        
        ll prev=k,p=1;
        for(int i=3; i<=n; i++){
            if(i%2==0){
                ans+=prev*1ll;
                ans%=mod;
            }
            else{
                ans+=(((k-p)*1ll*prev)%mod);
                ans%=mod;
                prev=(((k-p)*1ll*prev)%mod);
                p++;
            }
        }
        
        return ans%mod;
    }
};
