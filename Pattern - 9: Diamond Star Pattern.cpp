#include <bits/stdc++.h>
using namespace std;

int main() {   
    int N = 5;  // Define the number of rows for the pyramid

//Output for N = 5

//     *    
//    ***   
//   *****  
//  ******* 
// *********
// *********
//  ******* 
//   *****  
//    ***   
//     *

    // Printing the Erect Pyramid (Upper Triangle)
    for (int i = 0; i < N; i++) {
        
        // Printing leading spaces to center-align stars
        for (int j = 0; j < N - i - 1; j++) {
            cout << " ";
        }

        // Printing stars
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }

        // Move to the next row
        cout << endl;
    }

    // Printing the Inverted Pyramid (Lower Triangle)
    for (int i = 0; i < N; i++) {
        
        // Printing leading spaces before stars
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        // Printing stars
        for (int j = 0; j < 2 * N - (2 * i + 1); j++) {
            cout << "*";
        }

        // Move to the next row
        cout << endl;
    }

    return 0;
}
