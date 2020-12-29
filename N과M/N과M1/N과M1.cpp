#include <iostream>
using namespace std;
int n, m;
int vertex[8];
bool visited[8] = { 0, };
void dfs(int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			cout << vertex[i] << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (!visited[i]) {
			visited[i] = true;
			vertex[cnt] = i;
			dfs(cnt + 1);
			visited[i] = false;
		}
	}
}
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> n >> m;
	dfs(0);
}