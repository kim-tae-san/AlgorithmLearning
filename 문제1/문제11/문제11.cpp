#include <iostream>
using namespace std;
int gcd(int a, int b)
{
	return b ? gcd(b, a % b) : a;
}
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int a, b;
	cin >> a >> b;
	int c = gcd(a, b);
	cout << c << '\n' << a * b / c;
}