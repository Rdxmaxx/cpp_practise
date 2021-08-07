#include <iostream>
using namespace std;

// Given an array (or string), the task is to reverse the array/string.
// Input  : arr[] = {1, 2, 3}
// Output : arr[] = {3, 2, 1}




// Iterative Approach

void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int size) {
    for (int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
        
    } 
    cout<<endl;
}

int main() {

    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]); 
    printArray(arr, n);
    reverseArray(arr, 0, n-1);
    cout<<"Reversed Array: ";
    printArray(arr, n);

    return 0;
}





// Recursive Approach

// void reverseArray(int arr[], int start, int end) {
//     if (start >= end) {
//         return;
//     }
//     int temp = arr[start];
//     arr[start] = arr[end];
//     arr[end] = temp;

//     reverseArray(arr, start+1, end-1);
// }

// void printArray(int arr[], int size) {
//     for (int i=0; i<size; i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main() {

//     int arr[] = {1, 2, 3, 4, 5, 6};
//     printArray(arr, 6);
//     reverseArray(arr, 0, 5);
//     cout<<"Reversed array is"<<" ";

//     printArray(arr, 6);

//     return 0;
// }