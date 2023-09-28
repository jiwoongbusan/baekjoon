#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int num[3];
	int size[2];
	size[0] = 1;
	int n, temp;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		num.push_back(temp); 
		sort(nums.begin(), nums.end());
		if ((i+1) % 2 == 0) cout<<min(nums[(i + 1) / 2], nums[(i + 1) / 2 - 1])<<endl;
		else cout<< nums[i / 2]<<endl;
	}
	return 0;
}