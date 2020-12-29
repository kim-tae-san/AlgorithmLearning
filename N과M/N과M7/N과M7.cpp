#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, m;
vector<int> v;
vector<int> c;
void dfs(int cnt) {
	if (cnt == m) {
		for (auto i : c) {
			cout << i << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = 0; i < n; i++) {
		c.push_back(v[i]);
		dfs(cnt + 1);
		c.pop_back();
	}
}
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	dfs(0);
}