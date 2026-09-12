class Solution {
	public:
	int maxProduct(vector<int> &arr, int k) {
		// code here
		int n = arr.size();
		sort(arr.begin(), arr.end());
		int result = INT_MIN;
		for (int i = 0; i <= k; ++i) {
			int product = 1;
			for (int j = 0; j < k - i; ++j)product *= arr[j];
			for (int j = n - i; j<n; ++j)product *= arr[j];
			result = max(result, product);
		}
		return result;
	}
};
