#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Loop through each row
    for (int i = 1; i <= N; ++i) {
        // Print leading spaces for centering
        for (int j = 0; j < N - i; ++j) {
            cout << " ";
        }

        // Print the increasing sequence
        for (int j = 0; j < i; ++j) {
            cout << char('A' + j);
        }

        // Print the decreasing sequence
        for (int j = i - 2; j >= 0; --j) {
            cout << char('A' + j);
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}
