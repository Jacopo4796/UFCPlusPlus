#include <iostream>
using namespace std;

int main()
{
    int anni;
    cout << "anni?";
    cin >> anni;

    if (anni >= 18)
    {
        cout << "cheers! buon divertimento al bar! ";
    }
    else
    {
        cout << "mi dispiace, sei troppo giovane per la birra";
    }
    return 0;
}