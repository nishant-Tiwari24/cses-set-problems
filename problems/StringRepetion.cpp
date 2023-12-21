#include<iostream>
#include<>
#include<string>
using namespace std;

void stringRepetion(string name) {
    int count = 1;
    int maxCount = 0;
    int length = name.length();
    for(int i=0 ; i<length ; i++) {
        for(int j=i+1 ; i<length ; i++) {
            if(name[j] == name[i]) {
                count++;
            }

        }
        
    }
    cout<<maxCount<<endl;
}

int main() {
    string name;
    stringRepetion(name);
    return 0;
}