// #include <iostream>
// using namespace std;
// class Stack {
//     int size = 2;        
//     int arr[2];          
//     int top = -1;      
// public:
//     void push(int value) {
//         if (top >= size - 1) {
//             cout << "Stack overflow" << endl;
//         } else {
//             arr[++top] = value;
//         }
//     }
//     void pop() {
//         if (top == -1) {
//             cout << "No elements to pop" << endl;
//         } else {
//             top--;
//         }
//     }
//     int peek() {
//         if (top == -1) {
//             cout << "The Stack is empty" << endl;
//             return 0;
//         }
//         return arr[top];
//     }
//     void show() {
//         if (top == -1) {
//             cout << " The Stack is empty" << endl;
//         } else {
//             for (int i = 0; i <= top; i++) {
//                 cout << arr[i] << " ";
//             }
//             cout << endl;
//         }
//     }
// };
// int main() {
//     Stack st;
//     // st.push(1);
//     // st.push(2);
//     // st.push(3);
//     st.show();
//      cout << "Top: " << st.peek() << endl;
//     st.pop();
//     cout << "The Top after pop: " << st.peek() << endl;
//     st.pop();
//     st.pop();  
//     int x=4;
//     switch (x)    {
//         case 1:
//         cout<<"Enter a value to insert:";
//         st.push(4);
//         case 2:
//         cout<<"";
//     }     
//     return 0;
// }





#include <iostream>
using namespace std;
class Stack {
    int size = 2;
    int arr[2];
    int top = -1;
public:
    void push(int value) {
        if (top >= size - 1) {
            cout << "Stack overflow" << endl;
        } else {
            arr[++top] = value;
        }}
    void pop() {
        if (top == -1) {
            cout << "No elements to pop" << endl;
        }
         else {
            top--;
        }}
    int peek() {
        if (top == -1) {
            cout << "The Stack is empty" << endl;
            return 0;
        }
        return arr[top];
    }
    void show() {
        if (top == -1) {
            cout << "The Stack is empty" << endl;
        } else {
            for (int i = 0; i <= top; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }}};
int main() {
    Stack st;
    int choice, value;
    do {
        cout<<"1.Push\n";
        cout<<"2.Pop\n";
        cout<<"3.Peek\n";
        cout<<"4.Show\n";
        cout<<"5.Exit\n";
        cout<<"Enter your choice:";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter value to push:";
                cin>>value;
                st.push(value);
                break;
            case 2:
                st.pop();
                break;
            case 3:
                cout<<"Top:"<<st.peek()<<endl;
                break;
            case 4:
                st.show();
                break;
            case 5:
                cout<<"Exiting..."<<endl;
                break;
            default:
                cout<<"Invalid choice. Try again."<<endl;}
    }while(choice!=5);
    return 0;
}
