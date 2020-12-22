#include <iostream>
using namespace std;

int main() {
	int N, AP;
	int q;
	int X;
	int count = 0;
	/*
	예외처리
	if(N < 1) AP(arithmetic progression, 등차수열) = 0; 
	x가 한 자리 수일 때에는 항상 한수이다.
	x가 두 자리 수일 때에는 항상 한수이다.

	if(1<= N < 100) AP = N;
	x가 세 자리 수일 때를 잘 생각해보자
	111, 123, 135, 147, 159.
	210, 222, 234, 246, 258.
	321, 333, 345, 357, 369.
	420, 432, 444, 456, 468.
	531, 543, 555. 567. 579.
	630. 642. 654. 666. 678,
	741, 753, 765, 777, 789,
	840, 852, 864, 876, 888,
	951, 963, 975, 987, 999,


	*/ 

	cin >> N;

	if (N < 1) {
		AP = 0;
	}

	else if ((N >= 1) & (N < 100)) {
		AP = N;
	}

	else if ((N >= 100) & (N < 1000)) {
		q = N / 100;
		
		if (q >= 8) {
			X = q * 100 + (q - 4) * 10 + (q - 8);
			if (N >= X) {
				count += 1;
			}
		}
		
		if (q >= 6) {
			X = q * 100 + (q - 3) * 10 + (q - 6);
			if (N >= X) {
				count += 1;
			}
		}
		
		if (q >= 4) {
			X = q * 100 + (q - 2) * 10 + (q - 4);
			if (N >= X) {
				count += 1;
			}
		}

		if (q >= 2) {
			X = q * 100 + (q - 1) * 10 + (q - 2);
			if (N >= X) {
				count += 1;
			}
		}

		X = q * 100 + q * 10 + q;
		if (N >= X) {
			count += 1;
		}

		if (q <= 7) {
			X = q * 100 + (q + 1) * 10 + (q + 2);
			if (N >= X) {
				count += 1;
			}
		}

		if (q <= 5) {
			X = q * 100 + (q + 2) * 10 + (q + 4);
			if (N >= X) {
				count += 1;
			}
		}

		if (q <= 3) {
			X = q * 100 + (q + 3) * 10 + (q + 6);
			if (N >= X) {
				count += 1;
			}
		}

		if (q <= 1) {
			X = q * 100 + (q + 4) * 10 + (q + 8);
			if (N >= X) {
				count += 1;
			}
		}
		
		AP = 99 + 5 * (q - 1) + count;
	}

	else {
		AP = 144;
	}
	cout << AP;

	return 0;
}