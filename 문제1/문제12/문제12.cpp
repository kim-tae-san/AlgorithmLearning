#include <iostream>
#include <vector>
using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n, k;
	vector<int> v;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0)
			v.push_back(i);
	}
	if (v.size() < k)
		cout << 0;
	else
		cout << v.at(k - 1);
}