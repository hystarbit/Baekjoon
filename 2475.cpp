#include<iostream>
using namespace std;

int main() {
	int arr[5], cnt = 0, ans;
	
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		cnt += arr[i] * arr[i];
	}

	ans = cnt % 10;

	cout << ans << '\n';

	return 0;
}