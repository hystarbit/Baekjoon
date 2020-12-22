#include <iostream>
using namespace std;

int n;
int p[1002];
int q[1002];

void dfs(int k, int l) {
	int result = 0;
	for (int i = 1; i <= n; i++) {
		bool check = true;
		for (int j = 1; j < l; j++) {
			if (q[j] == p[i])
				check = false;
		}
		if (check) {
			q[l] = p[i];
			//cout << "b[" << l << "]: " << b[l] << "\n";
			if (l < n) {
				dfs(i + 1, l + 1);
			}
			else if (l == n) {
				for (int i = 1; i <= n; i++) {
					int temp = 0;
					temp += i * q[i];
				}
				cout << q[n] << '\n';
			}
			else {
				return;
			}
		}
	}
}

int main() {
	
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> p[i];
	}
}
