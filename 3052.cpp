#include<iostream>
using namespace std;

int main() {
	int a[10]; //input numbers
	int r[42] = { 0, }; //count the number of remainders divided by 42
	int count = 0; //count the number of diffrent remainder;

	for (int i = 0; i < 10; i++) {
		cin >> a[i];
		r[a[i] % 42]++;
	}

	for (int i = 0; i < 42; i++) {
		if (r[i] != 0) {
			count++;
		}
	}

	cout << count;
}
