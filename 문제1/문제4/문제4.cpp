#include <iostream>
#include <vector>
using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	while (true) {
		int a, b, c, max=0;
		cin >> a >> b >> c;
		a *= a;
		b *= b;
		c *= c;
		if (c < a) {
			int temp;
			temp = a;
			a = c;
			c = temp;
		}
		else if (c < b) {
			int temp;
			temp = b;
			b = c;
			c = temp;
		}
		if (a == 0 && b == 0 && c == 0)
			break;
		if (a + b == c) {
			cout << "right" << '\n';

		}
		else {
			cout << "wrong" << '\n';
		}
	}
}