#include <iostream>
#include <vector>
#include <algorithm>
#define CNT 3
using namespace std;

vector<string> v;
vector<string> c;
int result = 9999999;

void dfs(int cnt, int before) {
	if (cnt == CNT) {
		int n=0, m =0, l=0;
		for (int i = 0; i < 4; i++) {
			if (c[0][i] != c[1][i])
				n++;
			if (c[1][i] != c[2][i])
				m++;
			if (c[0][i] != c[2][i])
				l++;
		}
		if (n + m + l < result)
			result = n + m + l;
		return;
	}
	string s="";
	for (int i = 0; i < v.size(); i++) {
		if (before < i && v[i]!=s) {
			c.push_back(v[i]);
			s = v[i];
			dfs(cnt + 1, i);
			c.pop_back();
		}
	}
}
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	while (n--) {
		int a;
		cin >> a;
		while (a--) {
			string b;
			cin >> b;
			v.push_back(b);
		}
		sort(v.begin(), v.end());
		dfs(0, -1);
		cout << result << '\n';
		result = 9999999;
		while (!v.empty())
			v.pop_back();
	}
}