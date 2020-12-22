#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Time {
	int start; //meeting start
	int finish; // meeting finish
};

bool compare(Time a, Time b) {
	if (a.finish == b.finish)
		return a.start < b.start;
	else
		return a.finish < b.finish;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	cin >> n;

	vector<Time> time(n);

	for (int i = 0; i < n; i++) {
		cin >> time[i].start >> time[i].finish;
	}

	sort(time.begin(), time.end(), compare);

	int now = 0;
	int count = 0;

	for (int i = 0; i < n; i++) {
		if (now <= time[i].start) {
			now = time[i].finish;
			count++;
		}
	}
	
	cout << count;
	return 0;
}