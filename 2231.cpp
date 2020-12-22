#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, sum, temp;
	cin >> n;

	for (int i = 1; i < n; i++){
		sum = i;
		temp = i;
		while (temp != 0) {
			sum += temp % 10;
			temp = temp / 10;
		}
		if (sum == n) {
			cout << i;
			return 0;
		}
	}
	cout << '0';
	return 0;

	/*
	int n, digit = 0, m = 0, divisor = 1, initialDivisor = 1, count = 0, k, l, check = 0, check2 = 0, check3 = -12;
	int i = 0;

	bool find = true;
	bool finish = false;
	//if m = 100,000*a + 10,000 * b + 1,000c+100d+10e+f
	//n = (100000*a+10000*b+1000c+100d+10e+f)+(a+b+c+d+e+f)
	//  = 100001a+10001b+1001c+101d+11e+2f

	cin >> n;
	k = n;
	l = n;
	
	while (l != 0) {
		l = l / 10;
		digit++;
	}
	//cout << "digit" << digit << '\n';

	int * a = new int[digit];
	

	for (i = 0; i < digit; i++) {
		a[i] = 0;
		divisor *= 10;
	}
	
	divisor /= 10;
	initialDivisor = divisor;

	i = 0;

	while ((i < digit) & (divisor != 0) &(a[i] < 11)&(!finish)) {
		//cout << "divisor: " << divisor << '\n';
		//cout << "k: " << k << '\n';
		a[i] = k / (divisor + 1);
		if (a[i] >= 11) {
			find = false;
			finish = true;
		}
		//cout << "a["<<i<<"]: " << a[i] <<'\n';
		
		if ((a[i] != 0) & (i <= check3)) {
			a[i] -= 1;
		}
		
		if ((a[i] == 10)) {
			a[i] -= 1;
		}
		
		//cout << "count: " << a[i] << '\n';
		m += a[i] * divisor;
		check += a[i] * (divisor + 1);
		//cout << "check: " << check << '\n';
		//cout << "m: " << m << '\n';
		k -= a[i] * (divisor + 1);
		//cout << "k: " << k << '\n';
		
		i++;
		if (check == n) {
			//cout << "check == n" << '\n';
			find = true;
			finish = true;
		}
		else if (divisor == 1) {
			if (k % (divisor + 1) != 0) {
				k = n;
				m = 0;
				divisor = initialDivisor * 10;
				//cout << "oh divisor:" << divisor << '\n';
				check = 0;
				if (check2 == 0) {
					check3 = 0;
					check2 = 1;
				}
				else {
					check3++; 
					if (check3 >= digit) {
						find = false;
						finish = true;
					}
				}
				i = 0;
				//cout << "check3:" << check3 << '\n';
				//cout << "digit: " << digit << '\n';
			}
			else {
				find = false;
				finish = true;
			}
		}
		divisor /= 10;
		//cout << '\n';
	}

	if ((count >= 11) || (!find)) {
		cout << '0';
	}
	else {
		cout << m;
	}
	
	return 0;
	*/
}