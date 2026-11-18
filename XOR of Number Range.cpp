class Solution {
  public:
    int log_2(int x) {
        int ct = 1;
        while(x >>= 1) ct++;

        return ct;
    }
    void solve(int x, vector<int>& setbit) {
        if(x <= 0) return;
        if(x == 1) {
            setbit[0]++;
            return;
        }

        int numbit = log_2(x);
        int nearestpow = (1 << (numbit - 1));

        setbit[numbit - 1] += (x - nearestpow + 1);

        for(int i = 0; i < numbit - 1; i++) {
            setbit[i] += (nearestpow)/2;
        }

        solve(x - nearestpow, setbit);
    }
    int findXOR(int l, int r) {
        // code here
        
        vector<int> setbitl(32), setbitr(32);

        solve(l - 1, setbitl);
        solve(r, setbitr);

        int res = 0;
        for(int i = 0; i < 32; i++) {
            if((setbitr[i] - setbitl[i]) & 1) {
                res |= (1 << i);
            }
        }

        return res;
        
    }
};
