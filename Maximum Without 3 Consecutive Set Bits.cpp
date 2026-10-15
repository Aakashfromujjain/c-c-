class Solution {
public:
    int maxValue(int n) {
        for (int i = 30; i >= 2; i--) {
            int mask1 = 1 << i;
            int mask2 = 1 << (i - 1);
            int mask3 = 1 << (i - 2);

            if ((n & mask1) && (n & mask2) && (n & mask3)) {
                n = n ^ mask3;
            }
        }
        return n;
    }
};
