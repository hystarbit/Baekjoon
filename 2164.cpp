#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	int a = 0;
	int temp = 1;
	int result = 1;

	cin >> n;
	m = n;
	// if n = 2^a + b and 0 < b <= 2^a, 
	// result is 2 * b
	while (m != 1){
		m = m / 2;
		temp *= 2;
	}


	if (temp == n) {
		result = n;
	}
	else {
		result = 2 * (n - temp);
	}
	cout << result << '\n';
	
	return 0;
}