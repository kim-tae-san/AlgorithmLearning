#include <iostream>
#include <cmath>
using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int a, b, c=0, d=0, n=3;

	cin >> a >> b;
	for (int i = 0; i < n; i++) {
		c += (int)(a / pow(10, n - 1 - i)) % 10 * pow(10, i);
		d += (int)(b / pow(10, n - 1 - i)) % 10 * pow(10, i);
	}
	if (c > d) {
		cout << c;
	}
	else {
		cout << d;
	}
}