#include<iostream>
using namespace std;

void missingNumber(int n,int arr[]) {
    long long sum1=0;
    for(int i=0; i<n; i++) {
        sum1=sum1+arr[i];
    }
    int sum2=n*(n+1)/2;

    cout<<sum2-sum1<<endl;

}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    missingNumber(n, arr);
    delete[] arr;

    return 0;
}






