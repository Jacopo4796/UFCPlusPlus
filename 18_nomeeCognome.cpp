/*chiedi nome e cognome.
stampa << ciao nome cognome*/

#include <iostream>
#include <string>
using namespace std;

string nomeCognome(string nome, string cognome)
{
    return "ciao " + nome + " " + cognome;
}   

int main()
{
    string nome;
    string cognome;
    cout << "come ti chiami? \n";
    cin >> nome;
    cin >> cognome;
    cout << nomeCognome(nome, cognome);
}