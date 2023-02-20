/*scrivi un programma che mi
dica se ci sono due lettere
uguali attaccate*/

#include <iostream>
#include <string>
using namespace std;

bool ciSoneDoppie(string parola)
{
    for (int i = 0; i < parola.length(); i++)
    {
        if (parola[i] == parola[i + 1])
            return true;
    }
    return false;
}

int main()
{
    if (ciSoneDoppie("castello"))
    {
        cout << "Ci sono le doppie nella parola \n";
    }
    else
    {
        cout << "Non ci sono le doppie nella parola \n";
    }
}