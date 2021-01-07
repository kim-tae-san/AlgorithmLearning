#include <iostream>
#include <vector>
using namespace std;
int n;
int mi = 999999999;
int ma = -999999999;
vector<int> v;
vector<int> c;
void dfs(int cnt, int result) {
	if (cnt == n - 1) {
		if (result < mi)
			mi = result;
		if (result > ma)
			ma = result;
		return;
	}
	for (int i = 0; i < 4; i++) {
		if (c[i] != 0) {
			c[i]--;
			if (i == 0)
				result += v[cnt + 1];
			else if (i == 1)
				result -= v[cnt + 1];
			else if (i == 2)
				result *= v[cnt + 1];
			else if (i == 3)
				result /= v[cnt + 1];
			dfs(cnt + 1, result);
			c[i]++;
			if (i == 0)
				result -= v[cnt + 1];
			else if (i == 1)
				result += v[cnt + 1];
			else if (i == 2)
				result /= v[cnt + 1];
			else if (i == 3)
				result *= v[cnt + 1];
		}
	}
}
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> n;
	for(int i=0;i<n;i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	for (int i = 0; i < 4; i++) {
		int a;
		cin >> a;
		c.push_back(a);
	}
	dfs(0, v[0]);
	cout << ma <<'\n' << mi;
}