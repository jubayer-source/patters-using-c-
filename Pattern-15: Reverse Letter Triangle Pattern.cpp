#include <iostream>
using namespace std;

int main() {

// 5

// A B C D E 
// A B C D 
// A B C 
// A B 
// A 

    int N;
    cin >> N;

    for (int i = N; i >= 1; --i) {
        // For each row, print the first 'i' letters
        for (int j = 0; j < i; ++j) {
            cout << char('A' + j) << " ";
        }
        cout << endl;
    }

    return 0;
}
