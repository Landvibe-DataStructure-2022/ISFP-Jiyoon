#include <iostream>
#include <string>
using namespace std;

class node {
private:
	int value;
	node* next;
public:
	node() {
		this->next = nullptr;
		this->value = 0;
	}
	~node() {
		this->next = nullptr;
		this->value = 0;
	}

	friend class queue;
};

class queue {
private:
	node* head;
	node* tail;
	int queuesize;
public:
	queue() {
		this->head = nullptr;
		this->tail = nullptr;
		this->queuesize = 0;
	}
	~queue() {
		this->head = nullptr;
		this->tail = nullptr;
		this->queuesize = 0;
	}
	int size() {
		return this->queuesize;
	}
	bool isEmpty() {
		if (queuesize == 0) {
			return true;
		}
		else return false;
	}
	void enqueue(int value) {
		node* newnode = new node();
		newnode->value = value;
		if (isEmpty()) {
			this->head = this->tail = newnode;
			queuesize++;
		}
		else {
			this->tail->next = newnode;
			this->tail = newnode;
			queuesize++;
		}
	}

	void dequeue() {
		if (isEmpty()) {
			cout << "Empty" << endl;
		}
		else {
			node* deletenode = head;
			cout << deletenode->value << endl;
			if (this->queuesize == 1) {
				this->head = this->tail = nullptr;
			}
			else {
				this->head = deletenode->next;
			}
			delete deletenode;
			queuesize--;
		}
	}

	void front() {
		if (isEmpty()) {
			cout << "Empty" << endl;
		}
		else cout << this->head->value << endl;
	}

	void rear() {
		if (isEmpty()) {
			cout << "Empty" << endl;
		}
		else cout << this->tail->value << endl;
	}

};

int main() {
	int t;
	cin >> t;
	queue q;

	while (t--) {
		string s;
		cin >> s;

		if (s == "enqueue") {
			int x;
			cin >> x;
			q.enqueue(x);
		}
		else if (s == "dequeue") {
			q.dequeue();
		}
		else if (s == "isEmpty") {
			if (q.isEmpty()) {
				cout << "True\n";
			}
			else if (!q.isEmpty()) {
				cout << "False\n";
			}
		}
		else if (s == "size") {
			cout << q.size() << endl;
		}
		else if (s == "front") {
			q.front();
		}
		else if (s == "rear") {
			q.rear();
		}
	}
	return 0;
}