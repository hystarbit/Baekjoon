#include<iostream>
#include<string>
using namespace std;

int main() {
	/*
	ASCII code
	65 = 'A'
	...
	90 = 'Z'
	...
	97 = 'a'
	...
	122 = 'z'
	*/
	int alphabetCount[26] = { 0, };
	string word;

	cin >> word;

	for (char c: word) {
		if (c >= 'a')
			c = c - 32; //change small letter to capial letter;
		alphabetCount[c - 'A']++;
	}

	int max = 0; char c = '?';

	for (int i = 0; i <= 'Z' - 'A'; i++) {
		if (alphabetCount[i] > max) {
			max = alphabetCount[i];
			c = i + 'A';
		}
		else if (alphabetCount[i] == max) {
			c = '?';
		}
	}

	cout << c;
	return 0;
}