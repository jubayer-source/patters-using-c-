#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            // If the sum of i and j is even, print 1, else print 0
            if ((i + j) % 2 == 0) {
                cout << "1";
            } else {
                cout << "0";
            }
        }
        cout << endl;
    }

    return 0;
}
