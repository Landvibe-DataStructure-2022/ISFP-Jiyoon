#include <iostream>
using namespace std;

class Queue {
private:
	int queue[100]{};
	int frontidx;
	int rearidx;
	int queueSize;

public:
	Queue() {
		frontidx = 0;
		rearidx = -1;
		queueSize = 0;
	}

	void enqueue(int value) {
		rearidx++;
		queue[rearidx] = value;
		queueSize++;
	}

	int dequeue() {
		int returnvalue = queue[frontidx];
		frontidx++;
		queueSize--;
		return returnvalue;
	}

};

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		Queue P1;
		Queue P2;
		int deliveredHpOfP1 = 0;
		int deliveredHpOfP2 = 0;
		int scoreOfP1 = 0;
		int scoreOfP2 = 0;

		for (int i = 0; i < n; i++) { // P1 Ä«µå »ðÀÔ
			int card;
			cin >> card;
			P1.enqueue(card);
		}
		for (int i = 0; i < n; i++) { // P2 Ä«µå »ðÀÔ
			int card;
			cin >> card;
			P2.enqueue(card);
		}

		for (int i = 0; i < n; i++) {
			int P1card = P1.dequeue() + deliveredHpOfP1;
			int P2card = P2.dequeue() + deliveredHpOfP2;

			if (P1card > P2card) {
				deliveredHpOfP1 = 0;
				deliveredHpOfP2 = P1card - P2card;
				scoreOfP1++;
			}
			else if (P2card > P1card) {
				deliveredHpOfP1 = P2card - P1card;
				deliveredHpOfP2 = 0;
				scoreOfP2++;
			}
			else if (P2card == P1card) {
				deliveredHpOfP1 = deliveredHpOfP2 = 0;
			}
		}

		if (scoreOfP1 > scoreOfP2) {
			cout << scoreOfP1 << endl;
		}
		else if (scoreOfP2 > scoreOfP1) {
			cout << scoreOfP2 << endl;
		}
		else if (scoreOfP1 = scoreOfP2) {
			cout << scoreOfP1 << endl;
		}
	}
	return 0;
}