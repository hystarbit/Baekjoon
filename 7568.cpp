#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int * weight = new int[N];
	int * height = new int[N];
	int * grade = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> weight[i];
		cin >> height[i];
		grade[i] = 1;
	}

	for (int i = 0; i < N; i++) {
		for (int j = i; j < N; j++) {
			if ((weight[i] > weight[j])& (height[i] > height[j]))
				grade[j] += 1;
			else if ((weight[i] < weight[j])& (height[i] < height[j]))
				grade[i] += 1;
		}
	}

	for (int i = 0; i < N - 1; i++) {
		cout << grade[i] << " ";
	}

	cout << grade[N - 1];
}