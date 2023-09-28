#include <iostream>
#include<algorithm>
using namespace std;

int result[1000001];

int cal_min(int n) {
	result[1] = 1;
	result[2] = 2;
	result[3] = ;
	for (int i = 4; i <= n; i++) {
		result[i] = result[i - 1] + 1;
		if (i % 3 == 0) result[i] = min(result[i], result[i / 3] + 1);
		if (i % 2 == 0) result[i] = min(result[i], result[i / 2] + 1);
	}
	return result[n];
}

int main() {
	int n;
	cin >> n;
	cout<<cal_min(n);
	return 0;
}