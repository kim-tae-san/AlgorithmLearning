#include <iostream>
#include <vector>
using namespace std;
int n;
vector<int> v;
vector<int> c;
void dfs(int cnt) {
	if (cnt == n)
		return;
	for (int i = 0; i < 4; i++) {
		if (c[i] != 0) {
			c[i]--;
			
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
	dfs(n - 1);
}