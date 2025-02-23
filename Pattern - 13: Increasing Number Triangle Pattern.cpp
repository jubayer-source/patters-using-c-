#include <bits/stdc++.h>
using namespace std;
int main(){


// 5

// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 

    int N;
    cin >> N;

    int num = 1;

    for(int i = 0; i <= N; i++){
        for(int j = 0; j < i; j++){
            cout << num << " ";
            num = num + 1;
        }
        cout <<endl;
    }

    return 0;
}
