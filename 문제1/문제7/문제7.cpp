#include <deque>
#include <iostream>
using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	deque<int> q;
	cin >> n;
	while (n--) {
		string a;
		cin >> a;
		if (a == "push_front") {
			int n;
			cin >> n;
			q.push_front(n);
		}
		else if (a == "push_back") {
			int n;
			cin >> n;
			q.push_back(n);
		}
		else if (a == "front") {
			if (q.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << q.front() << '\n';
			}
		}
		else if (a == "back") {
			if (q.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << q.back() << '\n';
			}
		}
		else if (a == "size") {
			cout << q.size() << '\n';
		}
		else if (a == "empty") {
			cout << q.empty() << '\n';
		}
		else if (a == "pop_front") {
			if (q.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << q.front() << '\n';
				q.pop_front();
			}
		}
		else if (a == "pop_back") {
			if (q.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << q.back() << '\n';
				q.pop_back();
			}
		}
	}
}