#include <bits/stdc++.h>
using namespace std;
int main()
{

   // INPUT N: 5
   // 1
   // 1 2
   // 1 2 3
   // 1 2 3 4
   // 1 2 3 4 5


    int N;
    cout << "INPUT N: ";
    cin >> N;

    for (int i = 1; i <= N; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";

        }

        cout << endl;
    }
    return 0;
}
