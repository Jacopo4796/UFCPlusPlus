/*fai inserire all'utente da 
tastiera 10 parole. stampa la più grande.*/

#include <string>
#include <iostream>
using namespace std;

int main()
{
    string parolaNuova;
    string parolaGrande = " ";

    cout << "inserisci 10 parole: \n";

    for(int i = 0; i < 10; i++){
        cin >> parolaNuova;
        if(parolaNuova.length() > parolaGrande.length())
        {
            parolaGrande = parolaNuova;
        }
    }
    cout << "la parola più grande è: " << parolaGrande << "\n";
    return 0;
}    
        