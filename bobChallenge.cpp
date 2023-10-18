#include <iostream>
using namespace std;

int main() {
    const int MAX_SINGERS = 1000001;

    int n;
    cin >> n;

    int max_count = 0;
    int favorite_singers_count = 0;

    int singer_count[MAX_SINGERS] = {0};

    for (int i = 0; i < n; i++) {
        int singer;
        cin >> singer;
        singer_count[singer]++;
        
        if (singer_count[singer] > max_count) {
            max_count = singer_count[singer];
            favorite_singers_count = 1;
        } else if (singer_count[singer] == max_count) {
            favorite_singers_count++;
        }
    }

    cout << favorite_singers_count << endl;

    return 0;
}
