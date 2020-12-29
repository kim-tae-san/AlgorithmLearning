#include <iostream>
using namespace std;
int n, m;
int vertex[8];
void dfs(int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			cout << vertex[i] << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = 1; i <= n; i++) {
		vertex[cnt] = i;
		dfs(cnt + 1);
	}
}
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> n >> m;
	dfs(0);
}