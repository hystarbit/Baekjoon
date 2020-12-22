#include <iostream>
using namespace std;

int sum123(int n) {
	if (n == 1) {
		return 1;
	}
	if (n == 2) {
		return 2;
		// 2 = 1 + 1;
	}
	if (n == 3) {
		return 4;
		// 3 = 1 + 1+ 1 = 1 + 2 = 2 + 1
	}
	if (n > 3) {
		return sum123(n - 3) + sum123(n - 2) + sum123(n - 1);
		// 1 + (...)
		// 2 + (...)
		// 3 + (...)
	}
	return -1;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t, n;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n;
		cout << sum123(n) << '\n';
	}
}