#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int c, d;
		cin >> c >> d;
		if (c == d) {
			// if 'c' is equal to 'd' and they are both equal to 0, then there's no need
			// to do any operations, otherwise just one operation is needed
			if (c == 0) {
				cout << 0;
			} else {
				cout << 1;
			}
		} else {
			// if 'c' and 'd' is not equal to each other, then identify their difference:
			// if it's even, then 2 operations are needed, otherwise it is impossible
			if (abs(c - d) % 2 == 0) {
				cout << 2;
			} else {
				cout << -1;
			}
		}
		cout << '\n';
	}
	return 0;
}
