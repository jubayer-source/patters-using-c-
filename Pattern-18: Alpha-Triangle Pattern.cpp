#include <iostream>
#include <string>
using namespace std;

int main()
{

    // 6

    // F
    // E F
    // D E F
    // C D E F
    // B C D E F
    // A B C D E F

    int N;
    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        for (int j = N - i - 1; j < N; ++j)
        {
            cout << char('A' + j) << " ";
        }
        cout << endl;
    }
    return 0;
}
