#include <iostream>
using namespace std;
long long a[91];


long long fibonacci(int n) {
	a[0] = 0;
	a[1] = 1;
	for (int i = 2; i <= n; i++) {
		a[i] = a[i - 1] + a[i - 2];
	}
	return a[n];
}
int main() {
	int n;

	cin >> n;
	cout << fibonacci(n) << '\n';
	return 0;
}