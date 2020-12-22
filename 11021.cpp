#include<iostream>
using namespace std;

int main() {
	int n = 0, p = 0, q = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> p >> q;
		cout << "Case #" << i + 1 << ": " << p + q << endl;
	}
	return 0;
}