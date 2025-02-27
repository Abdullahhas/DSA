#include <iostream>
using namespace std;

#define Max 4

struct node {
    int info;
    node *next;
};

struct list {
    node *head;
};

list *adjmat[Max] = {nullptr};

void addNode(int s, int d) {
    node *src, *tem, *dest;

    if (adjmat[s] == nullptr) {
        adjmat[s] = new list;
        adjmat[s]->head = nullptr;
    }

    if (adjmat[s]->head == nullptr) {
        src = new node;
        src->info = s;
        src->next = nullptr;
        adjmat[s]->head = src;
    }

    dest = new node;
    dest->info = d;
    dest->next = nullptr;
    
    tem = adjmat[s]->head;
    while (tem->next != nullptr) {
        tem = tem->next;
    }
    tem->next = dest;
}

void display() {
    for (int i = 0; i < Max; i++) {
        if (adjmat[i] == nullptr) {
            cout << "Adjacency List for vertex " << i << ": (empty)" << endl;
            continue;
        }

        node *p = adjmat[i]->head;
        cout << "Adjacency List for vertex " << i << ": ";
        while (p) {
            cout << p->info << " ";
            p = p->next;
        }
        cout << endl;
    }
}

int main() {
    for (int i = 0; i < Max; i++) {
        adjmat[i] = new list;
        adjmat[i]->head = nullptr;
    }

    addNode(0, 1);
    addNode(0, 3);
    addNode(1, 2);
    addNode(2, 0); // Changed 4 to 0 to fit within range
    addNode(3, 1); // Changed 7 to 1 to fit within range
    addNode(2, 3); // Changed 8 to 3 to fit within range

    display();

    // Free allocated memory
    for (int i = 0; i < Max; i++) {
        if (adjmat[i] != nullptr) {
            node *current = adjmat[i]->head;
            while (current != nullptr) {
                node *next = current->next;
                delete current;
                current = next;
            }
            delete adjmat[i];
        }
    }

    return 0;
}
