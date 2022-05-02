// �������� ��������

#include <iostream>
#include <vector>
using namespace std;

class PriorityQueue {
private:
	vector<int> v;
public:
	bool empty() {
		if (v.size() == 0) return 1;
		else return 0;
	}
	void push(int e) {
		v.push_back(e);
	}

	int pop() {
		if (empty()) {
			return 0;
		}
		else {
			vector<int>::iterator p; // �ݺ��� ���
			vector<int>::iterator q = v.begin(); // max�� ����Ŵ
			for (p = v.begin(); p != v.end(); p++) {
				if (*p > *q) {
					q = p;
				}
			}
			int val = *q;
			v.erase(q);
			return val;
		}
	}

};

int main() {
	int T;
	cin >> T;
	while (T--) {
		int N;
		cin >> N;

		vector<int> v;
		PriorityQueue pq;

		for (int i = 0; i < N; i++) { // ���Ϳ� �ڿ��� N�� �Է�
			int n;
			cin >> n;
			v.push_back(n);
		}

		for (int i = 0; i < N; i++) { // ���Ϳ� ����� �� �켱����ť�� �̵��ϸ� ����
			pq.push(v.front());
			v.erase(v.begin());
		}

		for (int i = 0; i < N; i++) { // �켱����ť�� ����� �� ���ͷ� �̵�
			v.push_back(pq.pop());
		}

		for (int i = 0; i < N; i++) {
			cout << v[i] << " ";
		}
		cout << endl;

	}
}