//// �ǽ� 3���� (����) p1 - �����Ҵ� �� ���� ����
//// arr ũ�� ó������ ū ������ �����ϱ�
//// arr ũ�� �� ���޹޾Ƽ� �迭 ���� ���� ���(�߰��� �Ѳ� �ݾƳ�����)
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Stack {
//private:
//
//public:
//	int T;
//	int sizeofarr;
//
//	Stack(int sz) {
//		sizeofarr = sz;
//		T = -1;
//	}
//
//	int arr[20];
//
//	bool empty() {
//		if (T == -1) {
//			return true;
//		}
//		else return false;
//	}
//
//	void top() {
//		if (empty()) {
//			cout << "-1" << endl;
//		}
//		else cout << arr[T] << endl;
//	}
//
//	void push(int x) {
//		if (T + 1 > sizeofarr - 1) {
//			cout << "FULL" << endl;
//		}
//		else {
//			arr[T + 1] = x;
//			T++;
//		}
//	}
//
//	void pop() {
//		if (empty()) {
//			cout << "-1" << endl;
//		}
//		else {
//			cout << arr[T] << endl;
//			T--;
//		}
//	}
//
//};
//
//int main() {
//	int t, N;
//	cin >> t >> N;
//	Stack s(t);
//
//	for (int i = 0; i < N; i++) {
//		string str;
//		cin >> str;
//		if (str == "empty") {
//			if (s.empty()) {
//				cout << "1" << endl;
//			}
//			else if (!s.empty()) {
//				cout << "0" << endl;
//			}
//		}
//		if (str == "top") {
//			s.top();
//		}
//		if (str == "push") {
//			int x;
//			cin >> x;
//			s.push(x);
//		}
//		if (str == "pop") {
//			s.pop();
//		}
//	}
//
//	return 0;
//}