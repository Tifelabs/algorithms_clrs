#include <iostream>

void InsertSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main(){
    int size = 6;
    int arr[6] = {31, 41, 59, 26, 41, 58};

    InsertSort(arr, size);
    for(int i = size - 1; i >=0; i--){
        std::cout << arr[i] << "\n";
    }
    return 0;
}