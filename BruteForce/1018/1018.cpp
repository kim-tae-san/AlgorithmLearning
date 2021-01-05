#include <iostream>
#include <vector>
#define CNT 8
using namespace std;
int N, M;
int m = 99999999;
int result = 0;
vector<string> v;
void chess(int y, int x, char current) {
	for (int i = y; i < CNT + y; i++) {
		for (int j = x; j < CNT + x; j++) {
			if (v[i][j] != current) {
				result++;
			}
			if (current == 'W')
				current = 'B';
			else
				current = 'W';
		}
		if (current == 'W')
			current = 'B';
		else
			current = 'W';
	}
	if (m > result) {
		m = result;
	}
	result = 0;
}
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		string a;
		cin >> a;
		v.push_back(a);
	}
	for (int i = 0; i <= N - 8; i++)
	{
		for (int j = 0; j <= M - 8; j++) {
			chess(i, j, 'W');
			chess(i, j, 'B');
		}
	}
	cout << m;
}