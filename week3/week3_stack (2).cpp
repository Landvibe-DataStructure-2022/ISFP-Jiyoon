 // 깃허브 3주차 (스택) p2 - 배열로 구현
#include <iostream>
#include <string>
using namespace std;

class Stack {
private:
	int T;
public:
	

	Stack() {
		this->T = -1;
	}

	int arr[100];


	bool empty() {
		if (this->T == -1) {
			return true;
		}
		else return false;
	}

	int top() {
		if (empty()) {
			cout << "-1" << endl;
			return 0;
		}
		else return arr[this->T];
	}

	void push(int x) {
		if (this->T + 1 > 99) {
			cout << "FULL" << endl;
		}
		else {
			arr[this->T + 1] = x;
			this->T++;
		}
	}

	void pop() {
		if (empty()) {
			cout << "-1" << endl;
		}
		else {
			this->T--;
		}
	}
};


int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		Stack s;
		string str;
		cin >> str;
		for (int j = 0; j < str.size(); j++) {
			if (str[j] >= 48 && str[j] <= 57) {
				s.push(str[j] -'0');
			}
			else if (str[j] == '+' || str[j] == '-' || str[j] == '*') {
				int a = s.top();
				s.pop();
				int b = s.top();
				s.pop();
				if (str[j] == '+') {
					s.push(a + b);
				}
				else if (str[j] == '-') {
					s.push(b - a);
				}
				else if (str[j] == '*') {
					s.push(a * b);
				}
			}
		}
		cout << s.top() % 10 << endl;
	}
}