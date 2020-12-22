#include <iostream>
using namespace std;

//get gcd of a and b
int gcd(int a, int b) {
	if (a == 0) 
		return b;
	return gcd(b % a, a);
}

int main() {
	int a, b, result_gcd, result_hcf;
	cin >> a >> b;

	result_gcd = gcd(a, b);

	//get hcf of a and b
	result_hcf = a * b / result_gcd;

	//print gcd and hcf
	cout << result_gcd << '\n';
	cout << result_hcf;

	return 0;
}