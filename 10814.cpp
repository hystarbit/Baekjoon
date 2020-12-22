#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct memberinfo {
	int age, sign_up_order;
	string name;
};

bool compare(const memberinfo &a, const memberinfo &b) {
	if (a.age < b.age) {
		return true;
	}
	else if(a.age == b.age){
		return a.sign_up_order < b.sign_up_order;
	}
	else {
		return false;
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	memberinfo m;
	vector <memberinfo> v;
	int n;

	cin >> n;

	for (int i = 0; i < n; i++){
		cin >> m.age>> m.name;
		m.sign_up_order = i;
		v.push_back(m);
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < n; i++) {
		cout << v[i].age << " " << v[i].name << '\n';
	}

	return 0;
}