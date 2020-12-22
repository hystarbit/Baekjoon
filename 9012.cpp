#include <iostream>
#include <stack>
#include <string>
using namespace std;

//check if parantheses are correct
bool correctPar(string str) {
	int strlen = str.length();
	stack<char> s;

	for (int i = 0; i < strlen; i++) {
		if (str[i] == '(') {
			s.push(str[i]);
		}
		else if (str[i] == ')') {
			if (s.empty()) {
				return false;
			}
			else {
				s.pop();
			}
		}
		else {
			return false;
		}
	}
	if (s.empty()) {
		return true;
	}
	else {
		return false;
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	string str;
	cin >> t;
	
	for (int i = 0; i < t; i++) {
		cin >> str;
		if (correctPar(str)) {
			cout << "YES" << '\n';
		}
		else {
			cout << "NO" << '\n';
		}
	}

	return 0;
}