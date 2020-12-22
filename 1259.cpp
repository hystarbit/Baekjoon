#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	while (n != 0) {
		// if n is one digit number, n is always the palindrome number,
		if (n < 10) {
			cout << "yes" << "\n";
		}
		//if n is two digit number
		else if (n < 100) {
			//if the tens'digit of n is the same as the unit digit of n,
			//n is the palindrome number.
			if (n % 10 == n / 10) {
				cout << "yes" << "\n";
			}
			else {
				cout << "no" << "\n";
			}
		}
		//if n is three digit number
		else if (n < 1000) {
			//if the hundreds'digit of n is the same as the unit digit of n,
			//n is the palindrome number.
			if (n % 10 == n / 100) {
				cout << "yes" << "\n";
			}
			else {
				cout << "no" << "\n";
			}
		}
		//if n is four digit number
		else if (n < 10000) {
			//if the thousands'digit of n is the same as the unit digit of n
			//and the hundreds'digit of n is the same as the tens' digit of n,
			//n is the palindrome number.
			if ((n % 10 == n / 1000)&&((n/100)%10==(n/10)%10)) {
				cout << "yes" << "\n";
			}
			else {
				cout << "no" << "\n";
			}
		}
		//if n is five digit number
		else if (n < 100000) {
			//if the ten thousands'digit of n is the same as the unit digit of n
			//and the thousands'digit of n is the same as the tens' digit of n,
			//n is the palindrome number.
			if ((n % 10 == n / 10000) && ((n / 1000) % 10 == (n / 10) % 10)) {
				cout << "yes" << "\n";
			}
			else {
				cout << "no" << "\n";
			}
		}
		cin >> n;
	}
	return 0;
}