#include <iostream>
#include <map>
using namespace std;

int main() {
	int n, cost1, cost2, cost3, result;
	map<pair<int, int>,int> results; // key´Â d, c
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> cost1 >> cost2 >> cost3;
		if (i == 0) {
			results[make_pair(0, 0)] = cost1;
			results[make_pair(0, 1)] = cost2;
			results[make_pair(0, 2)] = cost3;
		}
		else {
			result = cost1 + results[make_pair(i - 1, 1)];
			if (result > cost1 + results[make_pair(i - 1, 2)]) result = cost1 + results[make_pair(i - 1, 2)];
			results[make_pair(i, 0)] = result;
			result = cost2 + results[make_pair(i - 1, 0)];
			if (result > cost2 + results[make_pair(i - 1, 2)]) result = cost2 + results[make_pair(i - 1, 2)];
			results[make_pair(i, 1)] = result;
			result = cost3 + results[make_pair(i - 1, 0)];
			if (result > cost3 + results[make_pair(i - 1, 1)]) result = cost3 + results[make_pair(i - 1, 1)];
			results[make_pair(i, 2)] = result;
		}
	}
	result = results[make_pair(n - 1, 0)];
	for (int i = 1; i < 3; i++) {
		if(results[make_pair(n-1, i)] < result) result = results[make_pair(n - 1, i)];
	}
	cout << result;
	return 0;
}