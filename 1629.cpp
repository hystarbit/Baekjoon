#include <iostream>
using namespace std;

long long int multiply(long long int a, long long int b, long long int c) {
	if (b == 0)
		return 1;
	else if (b == 1)
		return (a % c);
	long long int divide = multiply(a, b / 2, c) % c;
	long long int temp = a % c;
	if (b % 2 > 0)
		return (divide * divide * temp) % c;
	return (divide * divide) % c;
}

int main() {
	long long int a, b, c;
	cin >> a >> b >> c;

	cout << multiply(a, b, c);
}