#include <iostream>
using namespace std;

void SelectionSort (int arr[], int n){
    int i, j, min_index;
    for ( i=0 ; i < n-1 ; i++){
        min_index = i;
        for (j = i + 1; j<n ; j++){
            if (arr[j] < arr[min_index]){
                min_index = j;
            }
            
            if (min_index!= i){
                swap(arr[min_index], arr[i]);
            }
        }
    }
    
}

void printArray (int arr[], int size){
    int i ;
    for (i=0 ; i < size; i++){
        cout << " " << arr[i];
    }
}

int main() {
    int arr[] = {3,4,5,634,2312};
    int N = sizeof(arr)/ sizeof(arr[0]);
    SelectionSort(arr, N);
    printArray(arr,N);
    return 0;
}
