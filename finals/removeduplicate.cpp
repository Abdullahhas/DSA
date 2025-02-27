#include<iostream>
using namespace std;

struct node {
    int info;
    node *next;
};

node *head = NULL;

void insertbeg(int x) {
    node *p = new node;
    p->info = x;
    p->next = head;
    head = p;
}



void deletedubi() {
    node *p = head;
    node *q;

    while (p != NULL && p->next != NULL) {
        q = p;
        while (q->next != NULL) {
            if (p->info == q->next->info) {
                node *temp = q->next;
                q->next = q->next->next;
                delete temp;
            } else {
                q = q->next;
            }
        }
        p = p->next;
    }
}


void print() {
    node *q = head;
    while (q != NULL) {
        cout << q->info << " ";
        q = q->next;
    }
    cout << endl;
}

int main() {
    insertbeg(1);
    insertbeg(2);
    insertbeg(2);
    insertbeg(4);
    insertbeg(3);
    insertbeg(3);
    insertbeg(1);
    deletedubi();
    print();
    
    return 0;
}
