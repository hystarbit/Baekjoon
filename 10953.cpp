#include <iostream>
#include <string>
using namespace std;

int main() {
	int T;
	string S, string_A, string_B;
	int findcomma;
	int A, B;

	cin >> T;

	for (int i = 0; i < T; i++) {
		string_A = "";
		string_B = "";
		cin >> S;
		findcomma = S.find(',');
		for (int j = 0; j < findcomma; j++) {
			string_A += S[j];
		}
		for (int k = findcomma + 1; k < S.length() ; k++) {
			string_B += S[k];
		}
		A = stoi(string_A);
		B = stoi(string_B);
		cout << A + B << endl;
	}

}