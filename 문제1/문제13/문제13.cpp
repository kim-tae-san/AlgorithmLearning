#include <iostream>
using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int a;
	int n = 2;
	cin >> a;
	while (true) {
		if (a == 1) {
			break;
		}
		if (a == n)
		{
			cout << n;
			break;
		}
		if (a % n == 0) {
			a /= n;
			cout << n << '\n';
			n = 2;
		}
		else
			n++;
	}
}