#include <bits/stdc++.h>
using namespace std;

int main() {   

// Input N: 5

//     *
//    ***
//   *****
//  *******
// *********


    int N;
    cout << "Input N: ";
    cin >> N;

    // Outer loop to handle the number of rows
    for (int i = 0; i < N; i++) {
        
        // Printing spaces before the stars
        for (int j = 0; j < N - i - 1; j++) {
            cout << " ";
        }

        // Printing stars
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }

        // // Printing spaces after the stars (optional, does not affect pattern)
        // for (int j = 0; j < N - i - 1; j++) {
        //     cout << " ";
        // }

        // Move to the next line
        cout << endl;
    }

    return 0;
}
