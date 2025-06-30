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
  queue c;
  int choice, value;

do{
  cout<<"1.ENQUEUE \n";
  cout<<"2.DEQUEUE \n";
  cout<<"3.DISPLAY \n";
  cout<<"4.EXITING... \n";
  cout<<"enter your choice-> ";
  cin>>choice;

  switch(choice){

    case 1:
    cout<<"enter the value to be enqueue: "<<endl;
    cin>>value;
    c.enqueue(value);
    break;

    case 2:
    c.dequeue();
      cout<<"value dequeued"<<endl;
    break;

    case 3:
    cout<<"the elements in queue are : "<<endl;
    c.display();
    break;

    case 4:
     cout<<"EXIT"<<endl;
     break;

    default:
    cout<<"INVALID"<<endl;
  }

}

  while(choice<4);
}

