#include <iostream>
using namespace std;

int main() {
	int n, k;
	int value[11];
	int cnt = 0;

	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> value[i];
	}

	for (int i = n - 1; i >= 0; i--) {
		if (k >= value[i]) {
			cnt += k / value[i];
			k = k % value[i];
		}
	}

	cout << cnt;
}