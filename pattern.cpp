//                                        Pyramid


// #include <iostream>
// using namespace std;

// int main()
// {
//     int rows;
//     cout << "Enter the number of rows:";
//     cin >> rows;

//     for (int i = 1; i <= rows; i++)
//     {
//         for (int k = 1; k <= rows-i; k++)
//         {
//             cout <<" ";
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout <<"* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
//                                             Half Diamond




#include <iostream>
using namespace std;

void printRotatedTriangle(int n)
{
   
    for (int i = 1; i <= n; i++) {

        
        for (int j = 1; j <= i; j++) {
        
            cout << "*" << " ";
        }
       
        cout << endl;
    }
    
    for (int i = 1; i <= n - 1; i++) {

      
        for (int j = 1; j <= n - i; j++) {
             
            cout << "*" << " ";
        }
       
        cout << endl;
    }
}


int main()
{

    int n = 5;
    
    printRotatedTriangle(n);
    return 0;
}