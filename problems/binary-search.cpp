#include <iostream>
using namespace std;

bool binarySearch(int arr[],int n) {
    int low = 0, high = n-1;
    while (low <= high) {
        int mid = low + (high - low)/2;
        if(n == arr[mid])
            return 1;
        else if(n < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return 0;
}