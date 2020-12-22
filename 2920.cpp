#include<iostream>
using namespace std;

int main() {
	int arr[8], ascending_cnt = 0, descending_cnt = 0;

	for (int i = 0; i < 8; i++) {
		cin >> arr[i];
		if (arr[i] == i + 1) {
			ascending_cnt++;
		}
		else if (arr[i] == 8 - i) {
			descending_cnt++;
		}
	}

	if (ascending_cnt == 8) {
		cout << "ascending";
	}

	else if (descending_cnt == 8) {
		cout << "descending";
	}
	
	else {
		cout << "mixed";
	}

	return 0;
}