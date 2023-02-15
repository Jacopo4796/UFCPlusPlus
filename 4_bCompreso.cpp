#include <iostream>
#include <string>
using namespace std;
/* inseriti 3 numeri A, B e C
   dire se B è compreso tra A e C
*/

int main()
{
    int a, b, c;

    cout << "inserisci a \n";
    cin >> a;
    cout << "inserisci b \n";
    cin >> b;
    cout << "inserisci c \n";
    cin >> c;

    if ((a <= b and b <= c) or (b <= a and b >= c))
    {
        cout << "b è compreso tra a e c. \n";
    }
    else
    {
        cout << "b non è compreso ta a e c. \n";
    }
}