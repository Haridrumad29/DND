#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void insertAtBeginning(Node *&head, int value)
{
    Node *newNode = new Node();
    newNode->data = value;

    if (head == nullptr)
    {

        newNode->next = newNode;
        head = newNode;
    }
    else
    {

        Node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
        head = newNode;
    }
}

void display(Node *head)
{
    if (head == nullptr)
        return;
    Node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main()
{
    Node *head = nullptr;

    insertAtBeginning(head, 10);
    insertAtBeginning(head, 20);
    insertAtBeginning(head, 30);

    display(head);

    return 0;
}