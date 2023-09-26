#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n, temp, sum = 0;
	vector<int> nums;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		nums.push_back(temp);
	}
	sort(nums.begin(), nums.end());
	for (int i = 0; i < n; i++) {
		sum += nums[i] * (n - i);
	}
	cout << sum;
	return 0;
}