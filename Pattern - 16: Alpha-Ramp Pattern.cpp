#include <iostream>
using namespace std;

int main() {

// 5

// A 
// B B 
// C C C 
// D D D D 
// E E E E E 


    int N;
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        for (int j = 0; j < i; ++j) {
            cout << char('A' + i - 1) << " ";  // Print the letter corresponding to the row
        }
        cout << endl;
    }

    return 0;
}
