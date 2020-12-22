#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	char input[5];
	int count = 1;
	cin >> input;

	for (int i = 0; i < 4; i++) {
		if (i == 0) {
			if (input[i] == 'c') {
				count *= 26;
			}
			else if (input[i] == 'd') {
				count *= 10;
			}
		}
		else {
			if ((input[i - 1] == 'c')&(input[i] == 'c')) {
				count *= 25;
			}
			else if ((input[i - 1] == 'd')&(input[i] == 'c')) {
				count *= 26;
			}
			else if ((input[i - 1] == 'c')&(input[i] == 'd')) {
				count *= 10;
			}
			else if ((input[i - 1] == 'd')&(input[i] == 'd')) {
				count *= 9;
			}
		}
	}
	cout << count;
	return 0;
}