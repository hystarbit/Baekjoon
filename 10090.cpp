#include <iostream>
using namespace std;

int arr[1000001];
int tmp[1000001];

long long int cnt = 0;

void merge(int start, int mid, int end) {
	int n1, n2;
	n1 = mid - start + 1;
	n2 = end - mid;
	int * left = new int[n1];
	int * right = new int[n2];
	//cout << "beginning" << '\n';
	//cout << "start: " << start << '\n';
	//cout << "mid: " << mid << '\n';
	//cout << "end: " << end << '\n';
	//cout << "n1: " << n1 << '\n';
	//cout << "n2: " << n2 << '\n';
	
	//left array and right array
	
	for (int i = 0; i < n1; i++) {
		left[i] = arr[start + i];
		//cout << "left[" << i << "]: " << left[i] << '\n';
	}

	for (int i = 0; i < n2; i++) {
		right[i] = arr[mid + 1 + i];
		//cout << "right[" << i << "]: " << right[i] << '\n';
	}
	//cout << "start merge sort" << '\n';
	//merge array and count inversion
	int left_index = 0, right_index = 0, arr_index = start;

	
	while ((left_index < n1) && (right_index < n2)) {
		//cout << "left[" << left_index << "]: " << left[left_index] << '\n';
		//cout << "right[" << right_index << "]: " << right[right_index] << '\n';

		if (left[left_index] <= right[right_index]) {
			arr[arr_index] = left[left_index];
			left_index++;
		}

		else {
			cnt += n1 - left_index;
			arr[arr_index] = right[right_index];
			right_index++;			
			//cout << "cnt: "<< cnt << '\n';
		}
		
		arr_index++;
	}

	//copy remaining element
	while (left_index < n1) {
		arr[arr_index] = left[left_index];
		left_index++;

		arr_index++;
	}

	while (right_index < n2) {
		arr[arr_index] = right[right_index];
		right_index++;

		arr_index++;
	}
	//for (int i = start; i <= end; i++) {
		//cout << "arr[" << i << "]: " << arr[i] << '\n';
	//}
	
	//cout << "end" << '\n' << '\n';
}

void mergesort(int start, int end) {
	if (start < end) {
		int mid = start + (end - start) / 2;

		mergesort(start, mid);
		mergesort(mid + 1, end);
		merge(start, mid, end);
	}
}
int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	mergesort(0, n - 1);
	
	cout << cnt;

	return 0;
}