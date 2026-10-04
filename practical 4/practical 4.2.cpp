#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insertEnd(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;

        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;
    }
}

void deleteValue(int value) {
    if (head == NULL)
        return;

    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;

    while (temp->next != NULL) {
        if (temp->next->data == value) {
            Node* deleteNode = temp->next;
            temp->next = temp->next->next;
            delete deleteNode;
            return;
        }
        temp = temp->next;
    }
}

void forwardPrint() {
    Node* temp = head;

    cout << "Queue: ";

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

void reversePrint(Node* temp) {
    if (temp == NULL)
        return;

    reversePrint(temp->next);
    cout << temp->data << " ";
}

int main() {
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);

    forwardPrint();

    cout << "After deleting 20: ";
    deleteValue(20);
    forwardPrint();

    cout << "Reverse Queue: ";
    reversePrint(head);

    return 0;
}
