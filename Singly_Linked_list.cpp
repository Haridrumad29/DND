// // 




// // insrtion at begining


// #include <iostream>
// using namespace std;

// // Node structure
// struct Node {
//     int data;
//     Node* next;

//     Node(int value) {
//         data = value;
//         next = nullptr;
//     }
// };

// // Singly Linked List class
// class LinkedList {
// private:
//     Node* head;

// public:
//     LinkedList() {
//         head = nullptr;
//     }

//     // Insert at the beginning
//     void insertAtBeginning(int value) {
//         Node* newNode = new Node(value);
//         newNode->next = head;
//         head = newNode;
//     }

//     // Display the list
//     void display() {
//         Node* temp = head;
//         while (temp != nullptr) {
//             cout << temp->data << " -> ";
//             temp = temp->next;
//         }
//         cout << "NULL\n";
//     }

//     // Destructor to free memory
//     // ~LinkedList() {
//     //     Node* temp;
//     //     while (head != nullptr) {
//     //         temp = head;
//     //         head = head->next;
//     //         delete temp;
//     //     }
//     // }
// };

// // Main function to test
// int main() {
//     LinkedList list;

//     list.insertAtBeginning(30);
//     list.insertAtBeginning(20);
//     list.insertAtBeginning(10);

//     cout << "Linked List (after inserting at beginning): ";
//     list.display();

//     return 0;
// }
