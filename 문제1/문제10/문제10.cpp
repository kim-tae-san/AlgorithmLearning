#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int> v;
	int n;
	cin >> n;
	while (n--) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << '\n';
	}
}