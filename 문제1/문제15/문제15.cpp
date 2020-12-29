#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	int result;
	int min = 999999999;
	int num;
	int max = 0;
	vector<int> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	for (int i = 0; i < 10000; i++) {
		result = 0;
		for (int j = 0; j < v.size(); j++) {
			result += abs(v[j] - i);
		}
		if (result < min) {
			min = result;
			num = i;
		}
	}
	cout << num;
}