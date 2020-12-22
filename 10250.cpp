#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	int h, w, n;
	int x, y;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> h >> w >> n;
		//floor
		if (n % h == 0) {
			y = h;
		}
		else {
			y = n % h;
		}
		//room number at the floor
		
		if (n % h == 0) {
			x = n / h;
		}
		else {
			x = n / h + 1;
		}

		//print room number
		cout << y * 100 + x << '\n';
	}

	return 0;
}