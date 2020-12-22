#include <iostream>
using namespace std;

int main() {
	int N, T, C, P, quotient, avanue;
	cin >> N >> T >> C >> P;
	quotient = (N-1) / T;
	avanue = quotient * C * P;
	cout << avanue;
}