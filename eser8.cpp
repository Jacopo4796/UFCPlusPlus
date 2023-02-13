/*scrivere un programma che stampi
sullo schemo il vostro nome all'interno
di un rettangolo*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nome;
    string riga = "";
    cout << "inserire nome";
    cin >> nome;

    int lunghezza = nome.length();

    riga += "+-------"; 

    for(int i = 0; i < lunghezza; i++)
    {
        riga += "-";
    }
    riga += "+ \n";

    cout << riga;

    cout << "|    " << nome << "   |\n";
   
   cout << riga;
   
    return 0;
}
