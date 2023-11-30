#include <stdio.h>
#include <stdlib.h>

void maxHeapify(int arr[], int n, int i);
void buildMaxHeap(int arr[], int n);
int extractMax(int arr[], int* n);
int findKthLargest(int arr[], int n, int k);

int main()
{
    int n, k;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);

    int kthLargest = findKthLargest(arr, n, k);

    printf("The %dth largest element is: %d\n", k, kthLargest);

    return 0;
}

void maxHeapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;

    if(left < n && arr[left] > arr[largest])
        largest = left;

    if(right < n && arr[right] > arr[largest])
        largest = right;

    if(largest != i){
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        
        maxHeapify(arr, n, largest);
    }
}

void buildMaxHeap(int arr[], int n)
{
    for(int i=n/2-1; i>=0; i--){
        maxHeapify(arr, n, i);
    }
}

int extractMax(int arr[], int* n)
{
    if(*n <= 0)
        return -1;

    int root = arr[0];
    arr[0] = arr[*n - 1];
    (*n)--;
    maxHeapify(arr, *n, 0);

    return root;
}

int findKthLargest(int arr[], int n, int k)
{
    buildMaxHeap(arr, n);

    int kthLargest = -1;
    for(int i=0; i<k-1; i++)
        kthLargest = extractMax(arr, &n);

    kthLargest = extractMax(arr, &n);
    return kthLargest;
}