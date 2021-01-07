#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int n, m;
vector<vector<int>> c;
vector<vector<int>> t;
vector<vector<int>> r;
int result = 9999999;
void chicken(int cnt, int before) {
	if (cnt == m)
	{
		int mi = 0;
		for (int i = 0; i < c.size(); i++) {
			int a = 9999999;
			for (int j = 0; j < r.size(); j++) {
				if (abs(c[i][0] - r[j][0]) + abs(c[i][1] - r[j][1]) < a)
					a = abs(c[i][0] - r[j][0]) + abs(c[i][1] - r[j][1]);
			}
			mi += a;
		}
		if (mi < result)
			result = mi;
		return;
	}
	for (int i = 0; i < t.size(); i++) {
		if (before < i) {
			r.push_back(t[i]);
			chicken(cnt + 1, i);
			r.pop_back();
		}
	}
}
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int a;
			cin >> a;
			if (a == 1) {
				vector<int> d;
				d.push_back(j);
				d.push_back(i);
				c.push_back(d);
			}
			if (a == 2)
			{
				vector<int> e;
				e.push_back(j);
				e.push_back(i);
				t.push_back(e);
			}
		}
	}
	chicken(0, -1);
	cout << result;
}