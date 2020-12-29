#include <iostream>
#include <cmath>
using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int m, n;
	bool first = true;
	cin >> m >> n;
	for (int i = m; i <= n; i++) {
		if (i == 1)
			continue;
		bool flag = true;
		for (int j = 2; j*j <= i; j++) {
			if (i % j == 0) {
				flag = false;
				break;
			}
		}
		if (flag && first) {
			first = false;
			cout << i;
		}
		else if(flag) 
			cout << '\n' << i;
	}
}