class Solution {
  public:
    bool findPattern(string& s) {
        // code here
        int cnt=0;
        int n=s.size();
        int i=0;
        while(i<n)
        {
            while(i<n && s[i]=='x')
            {
                i++;
                cnt++;
            }
            while(i<n && s[i]=='y')
            {
                i++;
                cnt--;
            }
            if(cnt<0 || cnt>0)
            {
                return false;
            }
        }
        return cnt==0?true:false;
    }
};

..... see less

0

