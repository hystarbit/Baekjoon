#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[9];
	int min = 0;

	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		if (arr[i] > min) {
			min = arr[i];
		}
	}

	cout << min << '\n';

	for (int i = 0; i < 9; i++) {
		if (min == arr[i]) {
			cout << i + 1 << '\n';
		}
	}

	return 0;
}