#include <iostream>
using namespace std;

int main() {

// 5

// A 
// A B 
// A B C 
// A B C D 
// A B C D E 
    int N;
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        for (int j = 0; j < i; ++j) {
            cout << char('A' + j) << " ";  // Print the letters A, B, C, ... according to the row
        }
        cout << endl;  // Move to the next line after each row
    }

    return 0;
}
