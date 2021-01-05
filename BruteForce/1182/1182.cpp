#include <iostream>
#include <vector>
using namespace std;

bool visited[20] = { 0, };
vector<int> v;
vector<int> c;
int n, s;
int result;

void dfs(int cnt, int end, int start) {
	if (cnt == end) {
		int sum = 0;
		for (auto i : c)
			sum += i;
		if (sum == s)
			result ++;
		return;
	}
	for (int i = start; i < n; i++) {
		if (!visited[i]) {
			c.push_back(v[i]);
			visited[i] = true;
			dfs(cnt + 1, end, i);
			c.pop_back();
			visited[i] = false;
		}
	}
}

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> n >> s;
	for(int i=0;i<n;i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	for (int i = 1; i <= n; i++) {
		dfs(0, i, 0);
	}
	cout << result;
}