#include <iostream>
using namespace std;

int main() {
	int N, k, count=0;

	//Seive of Eratosthenes
	bool *primeArray = new bool[1001];
	primeArray[1] = false;
	for (int i = 2; i <= 1000; i++)
		primeArray[i] = true;

	for (int i = 2; i * i <= 1000; i++) {
		if(primeArray[i])
			for (int j = i * i; j <= 1000; j += i) {
				primeArray[j] = false;
			}
	}


	//N is the number of test case
	cin >> N;

	//check if test case is prime number
	for (int i = 0; i < N; i++) {
		cin >> k;
		if (primeArray[k]) count++;
	}
	cout << count;
}