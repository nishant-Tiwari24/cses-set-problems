#include <iostream>
using namespace std;

int top = -1;
int stack[100000];

void push(int n) {
    if (top < 99999) {
        stack[++top] = n;
        
    }
    else {
        cout<< "Overflow" << endl;
    }
}

void wierdAlgo(int n) {
    while (n > 1) {
        if (n % 2 == 0) {
            n = n / 2;
            push(n);
        }
        else {
            n = (n * 3) + 1;
            push(n);
        }
    }

    for (int i = 0; i <= top; i++) {
        
        cout << stack[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;
    cout << n << " ";
    wierdAlgo(n);
}
