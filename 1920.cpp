#include <iostream>
#include <algorithm>
using namespace std;

int BinaryTree(int arr[], int n, int k);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	int a[100001];
	int b[100001];
	int check;

	cin >> n;
	for (int i=0; i < n; i++) {
		cin >> a[i];
	}

	sort(a, a + n);

	cin >> m;
	for (int j = 0; j < m; j++) {
		cin >> b[j];
	}

	for (int j = 0; j < m; j++){
		check = BinaryTree(a, n, b[j]);
		cout << check << '\n';
	}
}

int BinaryTree(int arr[], int n, int k) {
	int left = 0;
	int right = n - 1;
	int mid;

	while (left <= right) {
		
		mid = (left + right) / 2;

		if (arr[mid] > k) {
			right = mid - 1;
		}
		else if (arr[mid] < k) {
			left = mid + 1;
		}
		else {
			return 1;
		}
	}

	return 0;
}