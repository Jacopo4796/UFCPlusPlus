/*scrivi un programma in c++
che chieda all'utente di inserire
10 numeri e determini il numero
più grande tra questi*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num = 0;
    int maggiore = 0;
    cout << "inserisci un numero: \n";
    for (int i = 0; i < 10; i++)
    {
        cin >> num;
        if (num > maggiore)
        {
            maggiore = num;
        }
    }
    cout << "il numero maggiore è:" << maggiore;
}
