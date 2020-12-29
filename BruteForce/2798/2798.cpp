#include <iostream>
#include <vector>
#include <algorithm>
#define CNT 3
using namespace std;

int N, M;
int m = 99999999;
int result = 0;
vector<int> v;
vector<int> c;

void blackjack(int cnt) {
	if (cnt == CNT) {
		int sum = 0;
		for (auto i : c) {
			sum += i;
		}
		if (sum <= M && M - sum <= m) {
			result = sum;
			m = M - sum;
		}
		return;
	}
	for (int i = 0; i < N; i++) {
		if (cnt == 0) {
			c.push_back(v[i]);
			blackjack(cnt + 1);
			c.pop_back();
		}
		else if (c[cnt - 1] < v[i]) {
			c.push_back(v[i]);
			blackjack(cnt + 1);
			c.pop_back();
		}
	}
}
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	blackjack(0);
	cout << result;
}