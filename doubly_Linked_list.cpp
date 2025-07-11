#include <iostream>
using namespace std;

// Define the Node structure
struct Node {
    int data;
    Node* prev;
    Node* next;
};

// Function to insert at the beginning
void insertAtBeginning(Node*& head, int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->prev = nullptr;
    newNode->next = head;

    if (head != nullptr)
        head->prev = newNode;

    head = newNode;
}

// Function to display the list
void display(Node* node) {
    cout << "Doubly Linked List: ";
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}


int main() {
    Node* head = nullptr;

    
    insertAtBeginning(head, 30);
    insertAtBeginning(head, 20);
    insertAtBeginning(head, 10);

    
    display(head);

    return 0;
}