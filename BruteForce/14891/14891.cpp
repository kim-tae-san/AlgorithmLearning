#include <iostream>
#include <vector>
#include <deque>
#include <cmath>

using namespace std;

bool visited[4] = { 0, };
vector<deque<char>> v;
vector<char> c;

void rotating(int a, int b) {
	if (visited[a]) {
		return;
	}
	visited[a] = true;
	if (a != 0 && c[a*2]!=c[a*2 - 1]) {
		rotating(a - 1, -b);
	}
	if (a != 3 && c[a*2 + 1] != c[(a+1)*2]) {
		rotating(a + 1, -b);
	}
	if (b == 1) {
		char r = v[a].back();
		v[a].pop_back();
		v[a].push_front(r);
		c[a * 2] = v[a][6];
		c[a * 2 + 1] = v[a][2];

	}
	else {
		char r = v[a].front();
		v[a].pop_front();
		v[a].push_back(r);
		c[a * 2] = v[a][6];
		c[a * 2 + 1] = v[a][2];
	}
}
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	for (int i = 0; i < 4; i++) {
		deque<char> a;
		string b;
		cin >> b;
		for (int j = 0; j < 8; j++) {
			if (j == 2 || j == 6)
				c.push_back(b[j]);
			a.push_back(b[j]);
		}
		char temp = c[i*2];
		c[i*2] = c[i*2 + 1];
		c[i*2 + 1] = temp;
		v.push_back(a);
	}
	int k;
	cin >> k;
	for (int i = 0; i < k; i++) {
		int a, b;
		cin >> a >> b;
		rotating(a-1, b);
		for (int j = 0; j < 4; j++) {
			visited[j] = false;
		}
	}
	int result = 0;
	for (int i = 0; i < 4; i++) {
		if (v[i].front() == '1')
			result += pow(2, i);
	}
	cout << result;
}