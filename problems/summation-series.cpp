#include <iostream>
using namespace std;

int solve(int x, int n) {
    if (n == 0) return 1;
    int sum = 0;
    int mul = 1;
    for(int i = 0; i<n; i++) {
        mul = pow(x,i);
        sum = sum + mul;
    }
    return sum;
}

int main() {
    int x;
    int n;
    cin>>x;
    cin>>n;
    solve(x,n);
}