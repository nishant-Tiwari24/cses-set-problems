#include <bits/stdc++.h>
using namsespace std;

void bucketSort(vector<float>& arr, int& n) {
    vector<float> b(n,0);
    for(auto &it : n) {
        int bi = n*it;
        b[bi].push_back(arr[i]);
    }
    
    for(int i=0; i<n; i++) {
        sort(b[i].begin(),b[i].end());
    }
    
    int index = 0;
    for(int i=0 ; i<n; i++) {
        for(int j=0; j<i.size(); j++) {
            arr[index++] = b[i][j];
        }
    }
}

int main() {
    vector<float> arr[n];
    bucketSort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
