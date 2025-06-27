// #include <iostream>
// using namespace std;
//  class stack{
//     int n =100;
//     int*arr;
//     int top;
//     public:
//     stack(){
//         arr= new int[n];
//         top =-1;

//     }
//     int push(int x){
//         if(n==n-1){
//         cout<<"stack overflow"<<endl;}
//             top++;
//             arr[top]=x;
//     }
//     void pop(){
//     if(top==-1){
//         cout<<"no elements to pop"<<endl;
//         return;
//     }
//     top--;
//     }
//     int Top(){
//         if (top== -1){
//             cout<<"no elements on top"<<endl;
//             return -1 ;
//         }
//         return arr [top];
//     }
//  };

//  int main (){
//     stack st;
//     st.push(5);
//     st.push(8); 
//     st.push(9);
//     cout<<st.Top()<<endl;
//     st.pop();
//     cout<<st.Top()<<endl;
//     st.pop();
//     st.pop();
//     st.pop();

//     return 0;

//  }



// #include <iostream>
// using namespace std;

// class Stack {
//     int n=2;
//     int arr[2]; 
//     int top=-1;
//         //     n = 100;
//         // top = -1;

// public:
//     // Stack() {
//     //     // n = 100;
//     //     // top = -1;
//     // }

//     void push(int x) {
//         if (top >= n - 1) {
//             cout << "Stack overflow" << endl;
//             return;
//         }
//         arr[++top] = x;
//     }

//     void pop() {
//         if (top == -1) {
//             cout << "No elements to pop" << endl;
//             return;
//         }
//         top--;
//     }

//     int Top() {
//         if (top == -1) {
//             cout << "No elements on top" << endl;
//             return -1;
//         }
//         return arr[top];
//     }
//     void display (){
//         for(int i=0;i<=top;i++){
//             cout<< arr[i]<<" ";
//         }
//     }
// };

// int main() {
//     Stack st;
//     st.push(5);
//     st.push(8);
//     st.push(9);
//     st.display();
//     cout<< endl << st.Top() << endl;
//     st.pop();
//     cout << st.Top() << endl;
//     st.pop();
//     st.pop();
//     // st.pop();
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
        }
    }
    void pop() {
        if (top == -1) {
            cout << "No elements to pop" << endl;
        } else {
            top--;
        }
    }
    int peek() {
        if (top == -1) {
            cout << "The Stack is empty" << endl;
            return 0;
        }
        return arr[top];
    }
    void show() {
        if (top == -1) {
            cout << " The Stack is empty" << endl;
        } else {
            for (int i = 0; i <= top; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};
int main() {
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.show();
     cout << "Top: " << st.peek() << endl;
    st.pop();
    cout << "The Top after pop: " << st.peek() << endl;
    st.pop();
    st.pop();           
    return 0;
}