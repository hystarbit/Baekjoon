#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(string a, string b) {
	if (a.length() < b.length()) {
		return true;
	}
	else if (a.length() == b.length()) {
		return a < b;
	}
	else {
		return false;
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	vector<string> v;
	int n;
	string s;
	string temp = "";

	//the number of words
	cin >> n;
	
	//enter words
	for (int i = 0; i < n; i++) {
		cin >> s;
		v.push_back(s);
	}

	//sort the words
	sort(v.begin(), v.end(), compare);

	//print the words
	//if the same words are entered multiple times, print them only one time.
	for (int i = 0; i < v.size(); i++) {
		if (temp != v[i]) {
			cout << v[i] << '\n';
			temp = v[i];
		}
	}

	return 0;
}