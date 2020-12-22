#include <iostream>
using namespace std;
int findDigit(unsigned long long int s) {
	int digit = 0;
	while (s != 0) {
		s = s / 10;
		cout << "digit: " << digit << '\n';
		digit++;
	}
	return digit;
}

unsigned long long int findX(unsigned long long int s, int a) {
	int n = 1;
	int b;
	if (a == 0)
		b = 0;
	if (a > 0)
		b = findX(s, a - 1);

	cout << "b: " << b << '\n';
	cout << "s: " << s << " a: " << a << '\n';
	for (int i = 0; i < a; i++) {
		n = n * 10;
	}
	cout << "n: " << n << '\n';

	for (int i = 0; i < 10; i++) {
		unsigned long long int temp = (i* n + b) * (i *n + b) *(i * n + b);
		cout << "temp: " << temp << '\n';
		if (temp % (10 * n) == s % (10 * n)) {
			cout << "i * n + b: " << i * n + b << '\n';
			return i * n + b;
		}
	}
	return -1;

}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, d;
	unsigned long long int s;
	
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> s;
		d = findDigit(s);
		cout << "d: "<< d << '\n';
		cout << "x: " << findX(s, d-1) << '\n';
	}

	// 0^3 = 0
	// 1^3 = 1
	// 2^3 = 8
	// 3^3 = 27
	// 4^3 = 64
	// 5^3 = 125
	// 6^3 = 218
	// 7^3 = 343
	// 8^3 = 512
	// 9^3 = 729

	// example
	// s = 123
	// x = 100a + 10b + c

	// get ones place
	// calculate 0^3, 1^3, 2^3.....
	// 7^3 % 10 = 3
	// c = 7

	// get tens place
	// calculate 7^3, 17^3,...97^3
	// 47^3 % 100 = 23
	// b = 4

	// get hundreds place
	// calculate 47^3, 147^3,...947^3
	// 947^3 % 1000 = 123
	// a = 9
	
	return 0;
}