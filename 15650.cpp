#include <iostream>
#include <vector>
using namespace std;
int n, m;
int *a = new int[n + 2];
int *b = new int[m + 2];

void dfs(int k, int l) {
	for (int i = k; i <= n; i++) {
		bool check = true;
		b[l] = a[i];
		//cout << "b[" << l << "]: " << b[l] << "\n";
		if (l < m) {
			dfs(i + 1, l + 1);
		}
		else if (l == m) {
			for (int i = 1; i <= m - 1; i++) {
				cout << b[i] << ' ';
			}
			cout << b[m] << '\n';
		}
		else {
			return;
		}

	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		a[i] = i;
	}

	/*
	for (int i = 1; i <= n; i++) {
		cout << "a["<< i << "]: " << a[i] << "\n";
	}
	*/

	dfs(1, 1);
	return 0;
}