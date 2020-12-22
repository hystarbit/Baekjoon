#include <iostream>
using namespace std;
long long a[1500002];

int main() {
	long long n;

	cin >> n;

	a[0] = 0;
	a[1] = 1;
	for (int i = 2; i < 1500000; i++) {
		a[i] = (a[i - 1] + a[i - 2]);
		a[i] %= 1000000;
	}

	//Pisano Period
	cout << a[n % 1500000] << '\n';
	return 0;
}