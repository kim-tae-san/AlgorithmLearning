#include <queue>
#include <iostream>
using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int k, n, num=0;
	queue<int> q;
	bool flag = true;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	cout << '<';
	while (!q.empty()) {
		num++;
		if (num % k == 0) {
			if (flag) {
				cout << q.front();
				q.pop();
				flag = false;
			}
			else {
				cout << ", " << q.front();
				q.pop();
			}
		}
		else {
			int temp = q.front();
			q.pop();
			q.push(temp);
		}
	}
	cout << '>';
}