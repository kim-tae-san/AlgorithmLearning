#include <iostream>
using namespace std;

int n, s;
int result = 0;
void dfs(int end) {
	if (end == s) {
		result++;
		return;
	}
	else if (end < s) {
		return;
	}
	for (int i = 1; i < 4; i++) {
		s += i;
		dfs(end);
		s -= i;
	}
}
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> n;
	while (n--) {
		int a;
		cin >> a;
		s = 0;
		dfs(a);
		cout << result << '\n';
		result = 0;
	}
}