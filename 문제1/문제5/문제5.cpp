#include <stack>
#include <iostream>
using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	stack<int> s;
	cin >> n;
	while (n--) {
		string a;
		cin >> a;
		if (a == "push") {
			int n;
			cin >> n;
			s.push(n);
		}
		else if (a == "top") {
			if (s.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << s.top() << '\n';
			}
		}
		else if (a == "size") {
			cout << s.size() << '\n';
		}
		else if (a == "empty") {
			cout << s.empty() << '\n';
		}
		else if (a == "pop") {
			if (s.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << s.top() << '\n';
				s.pop();
			}
		}
	}
}