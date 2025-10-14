#include <iostream>
using namespace std;


void InsertionSort(int arr[], int n){
    int i, key, j;
    for (i=0 ; i<n ; i++){
        key = arr[i];
        j = i - 1;
        while (j>=0 && arr[j] < key) {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}


void printArray (int arr[], int size){
    int i ;
    for (i=0 ; i < size; i++){
        cout << " " << arr[i];
    }
}

int main() {
    int arr[] ={3,4,5,634,2312};
    int N = sizeof(arr)/ sizeof(arr[0]);
    InsertionSort(arr, N);
    printArray(arr,N);
    return 0;
}
