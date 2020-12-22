#include <iostream>
using namespace std;
int n;
int height[30001];
int enemy[30001];

int max() {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (height[i] > height[j]) {
				enemy[i]++;
			}
			else
				break;
		}
	}

	int result = enemy[0];

	for (int i = 1; i < n; i++) {
		if (result < enemy[i]) {
			result = enemy[i];
		}
	}

	return result;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> height[i];
	}

	cout << max();

	return 0;
}