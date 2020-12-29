#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, m;
vector<int> v;
vector<int> c;
bool visited[8] = { 0, };
void dfs(int cnt) {
	if (cnt == m) {
		for (auto i : c) {
			cout << i << ' ';
		}
		cout << '\n';
		return;
	}
	int before = -1;
	for (int i = 0; i < n; i++) {
		if (cnt == 0 && before != v[i]) {
			before = v[i];
			visited[i] = true;
			c.push_back(v[i]);
			dfs(cnt + 1);
			visited[i] = false;
			c.pop_back();
		}
		else if (before != v[i] && c[cnt - 1] <= v[i] && !visited[i]) {
			before = v[i];
			visited[i] = true;
			c.push_back(v[i]);
			dfs(cnt + 1);
			visited[i] = false;
			c.pop_back();
		}
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