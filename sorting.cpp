// hello
// echo "# DND" >> README.md
// git init
// git add README.md
// git commit -m "first commit"
// git branch -M main
// git remote add origin https://github.com/Haridrumad29/DND.git
// git push -u origin main




//                                      Merge sort

// #include<iostream>
// using namespace std;
// void merge(int arr[],int start,int mid,int end){
//     int n1=mid-start+1;  
//     // int n1=mid+1;  
//     int n2= end-mid;  
//     // int n2= mid; 
//     int a[n1];
//     int b[n2];

// for(int i=0;i<n1;i++){
//     a[i]=arr[start+i];
// }

// for(int i=0;i<n2;i++ ){
//     b[i]=arr[mid+1+i];
// }
// int i=0;int j=0;int k=start;

// while(i<n1 && j<n2){
//     if(a[i]<b[j]){
//         arr[k]=a[i];
//         k++;
//         i++;
//     }

//     else{
//         arr[k]=b[j];
//         k++;
//         j++;

//     }
    
// }
// while(i<n1){
//     arr[k]=a[i];
//     k++;
//     i++;
// }

// while(j<n2){
//     arr[k]=b[j];
//     k++;
//     j++;

// }
// }

// void mergesort(int arr[],int start,int end){
// if(start<end)
// {
//     int mid=(start
// +end)/2;
//     mergesort(arr,start
// ,mid);
//     mergesort(arr,mid+1,end);
//     merge(arr,start
// ,mid,end);
// }}

// int main(){
//  int arr[]={5,4,3,2,1,0};
//  mergesort (arr,0,5);
//  for(int i=0;i<6;i++){
//     cout<<arr[i]<<" ";
//  }}

//                                     quick sort


// #include <iostream>
// using namespace std;
// void swap(int arr[],int i , int j){
//     // int temp=arr[i];
//     // arr[i]=arr[j];
//     // arr[j]=temp;
//     swap(arr[i],arr[j]);
// }
//  int part(int arr[],int start,int end){
//     int pivot=arr[end];
//     int i=start-1;
//     for(int j=start ; j<end;j++){
//         if(arr[j]< pivot){
//             i++;
//             swap(arr,i,j);
//         }
//     }
//     swap(arr,i+1,end);
//     return i;
// }
// void quicksort(int arr[],int start, int end){
//     if(start<end){
//         int pi= part(arr,start,end);
//         quicksort(arr,start,pi-1);
//         quicksort(arr,pi+1,end);
//     }
// }
// int main(){
//     // int n;
//     int arr[5]={0,5,6,52,7};
//     quicksort(arr,0,4);
//     for(int i=0;i<5;i++){
//     cout<<arr[i]<<endl;
//     }
// }


//                                       INSERTION SORT


#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
    
}


//                 selection sort


#include <iostream>
using namespace std;


void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}


void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main() {
    int arr[] = {29, 10, 14, 37, 13};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    selectionSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}




