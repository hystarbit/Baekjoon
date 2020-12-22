#include<iostream>
#include<string>
using namespace std;

int main() {
	int n;
	string s;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		int cnt = 0, score = 0;
		for (int j = 0; j < s.length(); j++) {
			if (s[j] == 'O') {
				cnt++;
				score += cnt;
			}
			else if (s[j] == 'X') {
				cnt = 0;
			}
		}
		cout << score << '\n';
	}
	return 0;
}