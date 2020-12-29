#include <iostream>
#include <vector>
using namespace std;
int n, m;
vector<int> v;
void dfs(int cnt) {
	if (cnt == m) {
		for (auto i : v) {
			cout << i << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (cnt == 0) {
			v.push_back(i);
			dfs(cnt + 1);
			v.pop_back();
		}
		else if (v[cnt - 1] <= i) {
			v.push_back(i);
			dfs(cnt + 1);
			v.pop_back();
		}
	}
}
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> n >> m;
	dfs(0);
}