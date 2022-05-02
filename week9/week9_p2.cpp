// 선택정렬 내림차순

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
			vector<int>::iterator p; // 반복에 사용
			vector<int>::iterator q = v.begin(); // max값 가리킴
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

		for (int i = 0; i < N; i++) { // 벡터에 자연수 N개 입력
			int n;
			cin >> n;
			v.push_back(n);
		}

		for (int i = 0; i < N; i++) { // 벡터에 저장된 수 우선순위큐로 이동하며 정렬
			pq.push(v.front());
			v.erase(v.begin());
		}

		for (int i = 0; i < N; i++) { // 우선순위큐에 저장된 수 벡터로 이동
			v.push_back(pq.pop());
		}

		for (int i = 0; i < N; i++) {
			cout << v[i] << " ";
		}
		cout << endl;

	}
}