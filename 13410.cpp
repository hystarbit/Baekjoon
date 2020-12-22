#include <iostream>
using namespace std;

int main() {
	int n, k, max;
	cin >> n >> k;
	max = 0;
	for (int i = 1; i <= k; i++) {
		int temp1, temp2;
		temp1 = n * i;
		//cout << "temp1: " << temp1 << '\n';
		temp2 = 0;
		while (temp1 != 0) {
			temp2 += temp1 % 10;
			temp1 = temp1 / 10;
			if (temp1 != 0) {
				temp2 *= 10;
			}
		}
		//cout << "temp2: " << temp2 << '\n';
		if (temp2 > max) {
			max = temp2;
		}
	}
	//cout << "max: " << max << '\n';
	cout << max;
	return 0;
}