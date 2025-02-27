#include<iostream>
using namespace std;

struct labmid1 {
    int queue[5];
    int front = -1;
    int rear = -1;
};

labmid1 q;

void enque(int x) {
    if (q.front == 0 && q.rear == 5 - 1) {
        cout << "Overflow\n";
        return;
    } else if (q.front == -1 && q.rear == -1) {
        q.front++;
        q.rear++;
        q.queue[q.rear] = x;
    } else {
        q.rear++;
        q.queue[q.rear] = x;

        // Sort the queue after enqueuing
        // int temp;
        // for (int i = q.front; i <= q.rear; i++) {
        //     for (int j = q.front; j <= q.rear - 1; j++) {
        //         if (q.queue[j] < q.queue[j + 1]) {
        //             temp = q.queue[j];
        //             q.queue[j] = q.queue[j + 1];
        //             q.queue[j + 1] = temp;
        //         }
        //     }
        // }
    }
}


void reverse()
{
    for (int i = 0; i < q.rear/2; i++)
    {
        int temp;
        temp = q.queue[i];
        q.queue[i] = q.queue[q.rear-i];
        q.queue[q.rear-i] = temp;
    }
    
}

void deque() {
    if (q.front == -1 && q.rear == -1) {
        cout << "Underflow\n";
        return;
    } else if (q.front == q.rear) {
        cout << "Element dequeued: " << q.queue[q.front] << endl;
        q.front = -1;
        q.rear = -1;
    } else {
        cout << "Element dequeued: " << q.queue[q.front] << endl;
        q.front++;
    }
}

int main() {
    enque(3);
    enque(1);
    enque(5);
    enque(2);
    enque(4);
     reverse();
    cout << "Queue elements after enqueuing and sorting:\n";
    for (int i = q.front; i <= q.rear; i++) {
        cout << q.queue[i] << " ";
    }
    cout << endl;

    // deque();
    // deque();
    // deque();
    // deque();
    // deque(); // Trying to dequeue from empty queue

    return 0;
}
