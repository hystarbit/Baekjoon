#include <iostream>
using namespace std;

int main() {
	int a[16], n, count;
	while (a[0] != -1) {
		count = 0;
		for (int i = 0; i < 16; i++) {
			cin >> a[i];
			if (a[i] == -1) {
				return 0;
			}
			if (a[i] == 0) {
				n = i;
				break;
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				if ((a[i] == 2 * a[j]) || (a[j] == 2 * a[i])) {
					//check if a[i] and a[j] are doubles.
					//cout << "i: " << i << " j: " << j << '\n';
					count += 1;
				}
			}
		}
		cout << count << '\n';
	}
	return 0;
}