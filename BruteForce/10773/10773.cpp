#include <iostream>
#include <stack>
using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	int result = 0;
	stack<int> s;
	cin >> n;
	while (n--) {
		int a;
		cin >> a;
		if (a == 0) {
			s.pop();
		}
		else {
			s.push(a);
		}
	}
	while (!s.empty()) {
		result += s.top();
		s.pop();
	}
	cout << result;
}