#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int index = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > index) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = index;
    }
}
