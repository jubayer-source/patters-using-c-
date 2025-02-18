#include <bits/stdc++.h>
using namespace std;

int main() {   
    int N = 5;  // Define the number of rows

// output will be like bellow;
// *********
//  ******* 
//   *****  
//    ***   
//     *   
    


    // Outer loop to handle the number of rows
    for (int i = 0; i < N; i++) {
        
        // Printing spaces before the stars
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        // Printing stars
        for (int j = 0; j < 2 * N - (2 * i + 1); j++) {
            cout << "*";
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}
