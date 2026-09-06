class Solution {
  public:
    long long pairAndSum(vector<int> &arr) {
        // code here
        long long sum=0;
                 for(int i=0;i<32;i++){
                     int pos_ones=0;
                     for(int j:arr){
                         int nj=(j>>i);
                         pos_ones+=(nj&1);
                     }
                     sum+=((pos_ones-1)*(1ll)*pos_ones/2)*(1ll)*(1<<i);
                 }
                 return sum;
            
    }
};
