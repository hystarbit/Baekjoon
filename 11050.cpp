#include<iostream>
using namespace std;

int binomial(int n, int k) {
	if (n < k) return 0;
	if((n == 1)||(k == 0)) return 1;
	return binomial(n - 1, k - 1) + binomial(n - 1, k);
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;

	cin >> n >> k;

	cout << binomial(n, k) << '\n';

	return 0;
}