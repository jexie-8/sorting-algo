#include <iostream>
using namespace std;

int partition ( int arr[], int low, int high ){
    int pivot = arr[high];
    int i = (low -1);
    for ( int j = low; j < high; j++ ){
        if ( arr[j] < pivot ){
            i++ ;
            swap(arr[i], arr[j]);
        }
    }
    swap (arr[i+1], arr[high]);
    return(i+1);
}

void QuickSort( int arr[], int low, int high ){
    if ( low < high ) {
        int pi = partition(arr, low, high);
        QuickSort(arr, low, pi -1);
        QuickSort(arr, pi+1, high);
    }
    
}

void printArray (int arr[], int size){
    int i;
    for (i=0 ; i < size; i++){
        cout << " " << arr[i];
    }
}

int main() {
    int arr[] ={3,4,5,634,2312};
    int N = sizeof(arr)/ sizeof(arr[0]);
    QuickSort(arr, 0, N-1);
    printArray(arr,N);
    return 0;
}
