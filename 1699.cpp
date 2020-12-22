#include <iostream>
using namespace std;
int arr[100001];

int square(int n) {
	int count = 0;
	int i = 0;
	while (n > 0) {
		if ((n >= i * i) & (n < (i + 1)*(i + 1))) {
			count += 1;
			n = n - i * i;
			i = 0;
		}
		else {
			i++;
		}
	}
	return count;
}
int main() {
	int n;
	cin >> n;
	cout << square(n);
}