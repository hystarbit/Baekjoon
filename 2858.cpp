#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// B - (L-2)(W-2) = LW - 2L - 2W + 4
	// R + B = LW
	// R = 2L + 2W- 4
	// L+W = 1/2 * (R+4)
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int r, b;
	int sum, multiply;
	int l, w;
	cin >> r >> b;

	// get L + W
	sum = (r + 4) / 2;

	//get LW
	multiply = r + b;

	// x^2-(L+R)x + (LR) = 0
	// x = ((L+R) +- root((L+R)^2-4LR))/2

	l = (sum + sqrt(sum * sum - 4 * multiply))/2;
	w = (sum - sqrt(sum * sum - 4 * multiply))/2;

	cout << l << ' ' << w;
	return 0;
}