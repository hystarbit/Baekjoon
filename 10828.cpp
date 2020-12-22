#include <iostream>
#include <string>
using namespace std;

class stack {
	int top;

public:
	int arr[10001];
	stack(){
		top = -1;
	}

	void push(int n) {

		if (top < 10000) {
			arr[++top] = n;
		}
		
	}

	int pop() {
		if (top == -1)
			return -1;
		else
			return arr[top--];
	}

	int size() {
		return (top + 1);
	}

	int empty() {
		if (top == -1) 
			return 1;
		else 
			return 0;
	}

	int Top() {
		if (top == -1)
			return -1;
		else
			return arr[top];
	}
};
int main() {
	int n;
	string str;
	stack s;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> str;
		
		if (str == "push") {
			int m;
			cin >> m;
			s.push(m);
		}
		else if (str == "pop") {
			cout << s.pop() << endl;
		}
		else if (str == "size") {
			cout << s.size() << endl;
		}
		else if (str == "empty") {
			cout << s.empty() << endl;
		}
		else if (str == "top") {
			cout << s.Top() << endl;
		}
		
	}
	return 0;
}

