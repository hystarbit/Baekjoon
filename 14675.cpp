#include<iostream>
#include<vector>
#define MAX 100001
using namespace std;

vector<int> tree[MAX];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, n, q, t, k;

	cin >> n;
	for (int i = 0; i < n - 1; i++) {
		cin >> a >> b;
		tree[a].push_back(b);
		tree[b].push_back(a);
	}

	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> t >> k;
		if (t == 2) {
			cout << "yes" << '\n';
		}
		else {
			int cnt = 0;
			for (int j : tree[k]) {
				cnt++;
			}
			if (cnt >= 2) {
				cout << "yes" << '\n';
			}
			else {
				cout << "no" << '\n';
			}
		}
	}
	return 0;
}