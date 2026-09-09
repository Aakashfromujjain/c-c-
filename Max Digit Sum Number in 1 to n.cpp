class Solution {
public:
    int findMax(int n) {
        int a = 0;
        int a1 = 0;
        int m = n;
        int sum1 = 0;
        int x = -1;
        int y = -1;
        int cnt = 0;
        int z = 0;
        int kcnt = 0;
        while(m > 0){
           x = m%10;
           a += x;
           m = m/10;
           if(m != 0){
               y = x;
               if(x == 9){
                  z++;
                  if(z == 1){
                    kcnt = cnt;
                   }
               }
               else{
                   z = 0;
                   kcnt = 0;
               }
           }
           cnt++;
        }
        m = n;
        int ans = 0;
        int sum2 = 0;
           if(y == 9){
               int q = 0;
               int o = 0;
               while(m > 0){
                  int t = m%10;
                  if(q < kcnt){
                     ans = ans + pow(10,q)*9;
                     sum2 += 9;
                  }
                  else{
                      o++;
                      if(o == 1){
                         ans = ans + pow(10,q)*8;
                         sum2 += 8;
                      }
                      else{
                         ans = ans + pow(10,q)*t; 
                         sum2 += t;
                      }
                  }
                  q++;
                  m = m/10;
               }
           }
           a1 += (9*(cnt-1));
           int p = cnt - 1;
           int r = 0;
           while(p--){
               sum1 = sum1 + pow(10,r)*9;
               r++;
           }
           if(x > 1){
              sum1 = sum1 + pow(10,r)*(x-1);
              a1 += (x-1);
           }
           if(a > a1){
               if(sum2 > a){
                   return ans;
               }
               else{
                   return n;
               }
           }
           if(a1 > a){
               if(sum2 >= a1){
                   return ans;
               }
               else{
                   return sum1;
               }
           }
           
           if(a == a1){
                return n;
           }
    }
};
