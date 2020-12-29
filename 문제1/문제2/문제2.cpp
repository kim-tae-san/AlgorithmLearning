#include <iostream>
using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	string a;
	int n;
	cin >> n;
	bool b[100];
	for (int i = 0; i < 100; i++) {
		b[i] = true;
	}
	bool flag = true;
	for (int i = 0; i < n; i++) {
		string c;
		cin >> c;
		if (flag) {
			flag = false;
		}
		else {
			for (int j = 0; j < c.size(); j++) {
				if (a[j] != c[j]) {
					b[j] = false;
				}
			}
		}
		a = c;
	}
	for (int i = 0; i < a.size(); i++) {
		if (b[i] == true) {
			cout << a[i];
		}
		else {
			cout << '?';
		}
	}
}