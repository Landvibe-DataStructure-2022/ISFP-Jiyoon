#include <iostream>
#include <string>

using namespace std;

int n;

class Queue {
private:
    int queue[10000]{};
    int frontidx;
    int rearidx;
    int queueSize;

public:
    Queue() {
        frontidx = 0;
        rearidx = -1;
        queueSize = 0;
    }

    void updateidx() {
        frontidx %= n;
        rearidx %= n;
    }

    int size() {
        return queueSize;
    }

    bool isEmpty() {
        if (size() == 0) {
            return true;
        }
        else {
            return false;
        }
    }

    void enqueue(int value) {
        if (queueSize >= n) {
            cout << "Full\n";
            return;
        }

        rearidx++;
        updateidx();
        queue[rearidx] = value;
        queueSize++;
    }

    void dequeue() {
        if (isEmpty() == true) {
            cout << "Empty\n";
            return;
        }

        cout << queue[frontidx] << "\n";
        frontidx++;
        updateidx();
        queueSize--;
    }

    void front() {
        if (isEmpty() == true) {
            cout << "Empty\n";
            return;
        }

        cout << queue[frontidx] << "\n";
    }

    void rear() {
        if (isEmpty() == true) {
            cout << "Empty\n";
            return;
        }

        cout << queue[rearidx] << "\n";
    }
};

int main() {
    int t;
    cin >> n >> t;

    Queue q;

    while (t--) {
        string s;
        cin >> s;

        if (s == "enqueue") {
            int value;
            cin >> value;
            q.enqueue(value);
        }
        else if (s == "dequeue") {
            q.dequeue();
        }
        else if (s == "isEmpty") {
            if (q.isEmpty() == true) {
                cout << "True\n";
            }
            else {
                cout << "False\n";
            }
        }
        else if (s == "size") {
            cout << q.size() << "\n";
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