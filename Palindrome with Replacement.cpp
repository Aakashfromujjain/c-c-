class Solution {

  public:

    int minimumSum(string &s) {

        int n = s.length();

        int i = 0;

        int j = n-1;

        string temp;

        while(i<j){

            if(s[i]!='?' && s[j]!='?' && s[i]!=s[j]) return -1;

            

            if(s[i]!='?'){

                temp += s[i];

            }

            else if(s[j]!='?'){

                temp += s[j];

            }

            i++;

            j--;

        }

        

        int ans = 0;

        int k = 1;

        while(k < temp.length()) {

            ans += abs(temp[k] - temp[k-1]);

            k++;

        }

        return 2*ans;

    }

};

