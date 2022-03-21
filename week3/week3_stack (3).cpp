//// 깃허브 3주차 (스택) p3
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Node {
//private:
//	int value;
//	Node* next;
//public:
//	Node() {
//		this->value = 0;
//		this->next = nullptr;
//	}
//	~Node() {
//		this->value = 0;
//		this->next = nullptr;
//	}
//
//	friend class LinkedList;
//	friend class Stack;
//};
//
//class LinkedList {
//private:
//	Node* head;
//	Node* tail;
//
//public:
//	LinkedList() {
//		this->head = nullptr;
//		this->tail = nullptr;
//	}
//	~LinkedList() {
//		this->head = nullptr;
//		this->tail = nullptr;
//	}
//
//	// empty 함수는 Stack 클래스에서 구현!
//	// empty일 때의 예외 처리는 Stack에서
//
//	void Append(int val) {
//		Node* appendNode = new Node;
//		appendNode->next = nullptr;
//		appendNode->value = val;
//
//		this->tail->next = appendNode;
//		this->tail = appendNode;
//	}
//
//	void Delete() { // Stack은 무조건 맨 뒤에서 접근하므로 맨 뒤 노드 지우는 경우만 구현
//		Node* cur = this->head;
//		Node* pre = this->head;
//		while (cur->next != nullptr) {
//			pre = cur;
//			cur = cur->next;
//		}
//		pre->next = nullptr;
//		this->tail = pre;
//		delete cur;
//	}
//	friend class Stack;
//};
//
//class Stack {
//private:
//	LinkedList ll;
//	int size;
//public:
//	Stack() {
//		ll = LinkedList();
//		this->size = 0;
//	}
//	~Stack() {
//		ll = LinkedList();
//		this->size = 0;
//	}
//
//	bool empty() {
//		if (this->size == 0) {
//			return true;
//		}
//		else return false;
//	}
//
//
//	void top() {
//		if (empty()) {
//			cout << "-1" << endl;
//		}
//		else {
//			cout << this->ll.tail->value << endl;
//		}
//	}
//
//	void push(int val) {
//		if (empty()) {
//			Node* newnode = new Node;
//			newnode->next = nullptr;
//			newnode->value = val;
//			this->ll.tail = newnode;
//			this->ll.head = newnode;
//			this->size++;
//		}
//		else {
//			this->ll.Append(val);
//			this->size++;
//		}
//	}
//
//	void pop() {
//		if (empty()) {
//			cout << "-1" << endl;
//		}
//		else if (this->size == 1) {
//			top();
//			this->ll.head = this->ll.tail = nullptr;
//		}
//		else {
//			top();
//			this->ll.Delete();
//			this->size--;
//		}
//	}
//
//};
//
//
//int main() {
//	int N;
//	cin >> N;
//	Stack s;
//	while (N--) {
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
//		else if (str == "top") {
//			s.top();
//		}
//		else if (str == "push") {
//			int a;
//			cin >> a;
//			s.push(a);
//		}
//		else if (str == "pop") {
//			s.pop();
//		}
//	}
//}