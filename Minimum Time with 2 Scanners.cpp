long long minTime(long long n, long long s1, long long s2) {
     long long low = 1, high = min(s1, s2) * n;
     while (low < high) {
         long long mid = low + (high - low) / 2;
         if (mid / s1 + mid / s2 >= n) high = mid;
         else low = mid + 1;
     }
     return low;
 }
