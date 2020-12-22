#include <iostream>
#include <string>
using namespace std;

int main() {
	string arr[51];
	int n, m;
	cin >> n >> m;
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int ans = 64;
	for (int ys = 0; ys <= n - 8; ys++) {
		for (int xs = 0; xs <= m - 8; xs++) {
			int count = 0;
			for (int y = 0; y < 8; y++) {
				for (int x = 0; x < 8; x++) {
					char correctTile;
					if ((xs + x + ys + y) % 2 == 1) {
						correctTile = 'B';
					}
					else {
						correctTile = 'W';
					}
					if (arr[ys + y][xs + x] != correctTile) {
						//reverse
						count += 1;
					}
				}
			}

			if (count > 32) {
				count = 64 - count;
			}
			if (ans > count) {
				ans = count;
			}

		}
	}
	cout << ans;
	return 0;

}