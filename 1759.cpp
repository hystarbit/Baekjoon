#include <iostream>
#include <algorithm>
using namespace std;
int c, l;
char * alphabet = new char[c + 1];
char * code = new char[l + 1];

bool compare(char a, char b) {
	return a < b;
}

void printcode(char *a, int j, int k) {
	if (j < l) {
		for (int m = k; m < c; m++) {
			code[j] = alphabet[m];
			if (j < l - 1)
				printcode(alphabet, j + 1, m + 1);
			else if (j == l - 1) {
				int check1 = 0; // check consonant
				int check2 = 0; // check vowel
				
				//check if code has 2 or more consonants and 1 or more vowels.
				for (int i = 0; i < l; i++) {
					if ((code[i] == 'a')||(code[i] == 'e')||(code[i] == 'i')
						||(code[i] == 'o')||(code[i] == 'u')) {
						check2 += 1;
					}
					else {
						check1 += 1;
					}
				}

				//print code if code has 2 or more consonants and 1 or more vowels.
				if ((check1 >= 2) &(check2 >=1)) {
					for (int i = 0; i < l; i++) {
						cout << code[i];
					}
					cout << '\n';
				}
			}
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> l >> c;
	
	for (int i = 0; i < c; i++) {
		cin >> alphabet[i];
	}

	//ascending order
	sort(alphabet, alphabet + c, compare);

	//print code
	printcode(alphabet, 0, 0);
}