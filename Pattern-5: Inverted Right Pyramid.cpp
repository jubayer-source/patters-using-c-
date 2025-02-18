#include <bits/stdc++.h>
using namespace std;
int main()
{

    // INPUT N: 5
    // * * * * *
    // * * * *
    // * * *
    // * *
    // *


    int N;
    cout << "INPUT N: ";
    cin >> N;

    for (int i = 1; i <= N; i++)
    {

        for (int j =N; j>=i; j--)
        {
            cout <<"* ";
        }

        cout << endl;
    }
    return 0;
}
