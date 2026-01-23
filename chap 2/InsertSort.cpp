#include <iostream>

void InsertionSort(int A[], int n){
    for(int i = 1; i < n; i++){
        int key = A[i];
        /* Insert A[i] into the sorted subarray A[1:i-1] */
        int j = i - 1;
        while(j >= 0 && A[j] > key){
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = key;
    }
}


int main(int argc, char *argv[]){
    int size = 6; 
    int arr[6] = {5, 2, 4, 6, 1, 3};

    std::cout << "ORIGINAL ARRAY: \n";
    for(int i = 0; i < size; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << '\n';       

    InsertionSort(arr, size);
    std::cout << "SORTED ARRAY: \n";
    for(int i = 0; i < size; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << '\n';

    return 0;
}


