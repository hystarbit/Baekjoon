#include<iostream>
#include<queue>
using namespace std;

int t, m, n, k;
int vis[51][51];
int matrix[51][51];
int dx[] = { 0, 1, 0, -1 };
int dy[] = { 1, 0, -1, 0 };

void dfs(int y, int x) {
	vis[y][x] = 1;
	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if ((0 <= ny < n) and (0 <= nx < m)) {
			if (matrix[ny][nx] == 1) {
				if (vis[ny][nx] == 0) {
					dfs(ny, nx);
				}
			}
		}
	}
}


void bfs(int y, int x) {
	queue<pair<int, int>> q;
	q.push(pair<int, int>(y, x));
	vis[y][x] = 1;
	while (!q.empty()) {
		int cy = q.front().first;
		int cx = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int ny = cy + dy[i];
			int nx = cx + dx[i];
			if ((0 <= ny < n) and (0 <= nx < m)) {
				if (matrix[ny][nx] == 1) {
					if (vis[ny][nx] == 0) {
						vis[ny][nx] = 1;
						q.push (pair<int, int>(ny, nx));
					}
				}
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> t;
	for (int i = 0; i < t; i++) {
		vector<pair<int, int>>arr;
		int ans = 0;
		cin >> m >> n >> k;
		for (int j = 0; j < k; j++) {
			int a, b;
			cin >> a >> b;
			matrix[b][a] = 1;
			arr.push_back(pair<int, int>(b, a));
		}
		for (int i = 0; i < k; i++) {
			int temp_y = arr[i].first;
			int temp_x = arr[i].second;
			if (vis[temp_y][temp_x] == 0) {
				++ans;
				dfs(temp_y, temp_x);
			}
		}
		cout << ans << "\n";
	}
	return 0;
}