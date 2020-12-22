#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, sum=0;

	cin >> n >> m;

	int * a = new int[n];
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				if (a[i] + a[j] + a[k] <= m) {
					if (a[i] + a[j] + a[k] > sum) {
						sum = a[i] + a[j] + a[k];
					}
				}
			}
		}
	}

	cout << sum;

	return 0;
}