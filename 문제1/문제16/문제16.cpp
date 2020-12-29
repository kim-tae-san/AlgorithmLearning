#include <iostream>
using namespace std;
int main() {
	enum direction { NORTH = 0, EAST = 1, SOUTH = 2, WEST = 3 };
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int direct = 0;
	int n;
	int maxx = 0, minx = 0, maxy = 0, miny = 0;
	int turtle[2] = { 0, 0 };
	cin >> n;
	while (n--) {
		string s;
		cin >> s;
		maxx = 0, minx = 0, maxy = 0, miny = 0;
		turtle[0] = 0;
		turtle[1] = 0;
		direct = 0;
		for (int i = 0; i < s.size(); i++) {
			switch (s[i]) {
			case 'F':
				if (direct == 0) {
					turtle[1]++;
					if (turtle[1] > maxy)
						maxy = turtle[1];
				}
				else if (direct == 1) {
					turtle[0]++;
					if (turtle[0] > maxx)
						maxx = turtle[0];
				}
				else if (direct == 2) {
					turtle[1]--;
					if (turtle[1] < miny)
						miny = turtle[1];
				}
				else if (direct == 3) {
					turtle[0]--;
					if (turtle[0] < minx)
						minx = turtle[0];
				}
				break;
			case 'B':
				if (direct == 0) {
					turtle[1]--;
					if (turtle[1] < miny)
						miny = turtle[1];
				}
				else if (direct == 1) {
					turtle[0]--;
					if (turtle[0] < minx)
						minx = turtle[0];
				}
				else if (direct == 2) {
					turtle[1]++;
					if (turtle[1] > maxy)
						maxy = turtle[1];
				}
				else if (direct == 3) {
					turtle[0]++;
					if (turtle[0] > maxx)
						maxx = turtle[0];
				}
				break;
			case 'R':
				if (direct == 3) {
					direct = 0;
				}
				else
					direct++;
				break;
			case 'L':
				if (direct == 0)
					direct = 3;
				else
					direct--;
				break;
			}
		}
		cout << (maxx - minx) * (maxy - miny) << '\n';
	}
}