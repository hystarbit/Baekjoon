#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(const pair<int,int> &a, const pair<int,int> &b) {
	if (a.first != b.first)
		return (a.first < b.first);
	else
		return (a.second < b.second);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	std::vector <pair <int, int>> coordinate;
	
	int n;
	int x, y;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		coordinate.push_back(make_pair(x, y));
	}

	sort(coordinate.begin(), coordinate.end(), compare);
	for (int i = 0; i < n; i++)
	{
		cout << coordinate[i].first << " "
			<< coordinate[i].second << '\n';
	}

	return 0;
}