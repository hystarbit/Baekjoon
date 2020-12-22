#include <stdio.h>
#include <stdlib.h>

int memo[41] = {0, 1, 1};

int fibonacci(int n) {
	if (n <= 1) return memo[n];
	if (memo[n] > 0) return memo[n];
	memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
	return memo[n];
}

int main()
{
	int T; 
	scanf_s("%d", &T); //enter the number of testcase

	for (int i = 0; i < T; i++) {
		int N;
		scanf_s("%d", &N);
		if (i == 0) printf("%d %d\n", 1, 0);
		else if (N == 1) printf("%d %d\n", 0, 1);
		else {
			fibonacci(N);
			printf("%d %d\n", memo[N - 1], memo[N]);
		}
	}

	return 0;
}