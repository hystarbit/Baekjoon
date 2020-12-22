#include<iostream>
#include<algorithm>
using namespace std;

bool compare(const int&a, const int &b) {
	return a > b;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;

	cin >> n;

	int * arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n, compare);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << '\n';
	}
}