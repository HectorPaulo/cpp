#include <iostream>

struct Node {
    int data;
    Node* next;
};

class CircularLinkedList {
private:
    Node* head;

public:
    CircularLinkedList() : head(nullptr) {}

    void insert(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        if (head == nullptr) {
            newNode->next = newNode;
            head = newNode;
        } else {
            newNode->next = head->next;
            head->next = newNode;
        }
    }

    void display() {
        if (head == nullptr) {
            return;
        }
        Node* current = head;
        do {
            std::cout << current->data << " ";
            current = current->next;
        } while (current != head);
        std::cout << std::endl;
    }

    ~CircularLinkedList() {
        if (head == nullptr) {
            return;
        }
        Node* current = head;
        while (current->next != head) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        delete head;
    }
};

int main() {
    CircularLinkedList list;
    list.insert(3);
    list.insert(7);
    list.insert(12);

    list.display();

    return 0;
}
