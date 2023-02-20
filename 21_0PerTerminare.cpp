/*fai inserire parole all'utente
(0 per terminare). stampa vero o falso
se almeno una parola contiene doppie*/

#include <iostream>
#include <string>
using namespace std;

int contatore = 0;

bool ciSonoDoppie(string parola)
{
    for (int i = 0; i < parola.length() -1; i++)
    {
        if (parola[i] == parola[i + 1])
            return true;
    }
    return false;
}

bool ciSonoLettereDoppie()
{
    string parola;
    bool doppie = false;
    
    
    while (parola != "0")
    {
        cout << "inserisci parola: \n";
        cin >> parola;

        if (ciSonoDoppie(parola) == true)
        {
            doppie = true;
            contatore++;
        }
    }
    return doppie;
    
}

int main()
{
    cout << ciSonoLettereDoppie() << "\n" << contatore;
}