#include <iostream>
using namespace std;
class queue
{
public:
    int n = 2;
    int arr[2];
    int front = 0;
    int rear = 0;

    void enqueue(int x)
    {

        if (rear >= n)
        {
            cout << "Overflow" << endl;
        }
        else
        {
            arr[rear++] = x;
        }
    }

    void dequeue()
    {
        if (front == -1 && rear == -1)
        {
            cout << "underflow" << endl;
        }
        else
        {
            front++;
        }
    }
    void display()
    {
        for (int i = front; i < rear; i++)
        {

            cout << arr[i] << endl;
            
        }
        return;
    }
};
int main()
{
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.display();
    q.enqueue(3);
    q.dequeue();
    q.display();
}
