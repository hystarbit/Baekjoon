#include <iostream>
using namespace std;

int main() {
	int x, y, w, h, min;

	//inital value of minimum
	min = 1000;

	//Enter inputs
	cin >> x >> y >> w >> h;


	if (x < min) min = x;
	if (y < min) min = y;
	if (w - x < min) min = w - x;
	if (h - y < min) min = h - y;

	cout << min;
}