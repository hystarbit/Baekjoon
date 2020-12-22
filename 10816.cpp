#include <iostream>
#include <algorithm>
using namespace std;

int LowerBinaryTree(int* a, int n, int b);
int LowerBinaryTree(int* a, int n, int b);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;

	int a[500001];
	int b[500001];
	
	int check;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a, a + n);

	cin >> m;
	for (int j = 0; j < m; j++) {
		cin >> b[j];
	}

	for (int j = 0; j < m; j++) {
		cout <<
	}

}

int LowerBinaryTree(int* a, int n, int b) {
	int left, mid, right;
	mid = (left + right) / 2;
	while (left < right) {
		if (a[mid] >= b) right = mid;
		else left = mid + 1;
	}
	return right;
}

int LowerBinaryTree(int* a, int n, int b) {
	int left, mid, right;
	mid = (left + right) / 2;
	while (left < right) {
		if (a[mid] > b) right = mid;
		else left = mid + 1;
	}
	return right;
}