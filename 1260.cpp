#include<iostream>
#include<queue>
using namespace std;

#define MAX_VALUE 1001           
int N, M, V;                    
int mat[MAX_VALUE][MAX_VALUE]; 
int visit[MAX_VALUE];            

void dfs(int v) {

	cout << v << ' ';
	visit[v] = 1;            //방문한 노드를 visit 0에서 1로 변경
	for (int i = 1; i <= N; i++) {
		if (visit[i] == 1 || mat[v][i] == 0)
			continue;
		dfs(i);                //dfs에서 재귀를 사용
	}
}

void bfs(int v) {
	queue<int> q;            //bfs에서는 q를사용
	q.push(v);
	visit[v] = 0;            //방문한 노드를 visit 1에서 0으로 변경
	while (!q.empty()) {
		v = q.front();
		cout << q.front() << ' ';
		q.pop();
		for (int i = 1; i <= N; i++) {
			if (visit[i] == 0 || mat[v][i] == 0)
				continue;
			q.push(i);
			visit[i] = 0;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int x, y;
	cin >> N >> M >> V;           
	for (int i = 0; i < M; i++) {
		cin >> x >> y;
		mat[x][y] = mat[y][x] = 1;   
	}
	dfs(V);
	cout << '\n';
	bfs(V);
	return 0;
}
