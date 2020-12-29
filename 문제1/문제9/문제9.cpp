#include <stack>
#include <iostream>
using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n, num=0;
	stack<int> s;
	cin >> n;
	while (n--) {
		string a;
		cin >> a;
		for (int i = 0; i < a.size(); i++) {
			if (!s.empty() && s.top() == a[i]) {
				s.pop();
			}
			else{
				s.push(a[i]);
			}
		}
		if (s.empty()) {
			num++;
		}
		while (!s.empty())
			s.pop();
	}
	cout << num;
}