#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// dice quale numero è più grande
// input: numero "x" e numero "y"
// output: numero più grande
int piuGrande(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

// dice se il numero è pari
// input: numero x
// output: true(1) o false(0)
bool isEven(int x)
{
    int resto = x % 2;
    if (resto == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// calcola il prezzo compreso dell'interesse
// input: valore prezzo, valore interesse
// output: ritorna il costo totale
double costoTotale(double prezzo, int interesse)
{
    interesse = prezzo * interesse / 100;
    double costoTotale = prezzo + interesse;
    return costoTotale;
}

// chiede l'età per poter bere
// input: età
// output: stampa "cheers...." se maggiorenne, "mi dispiace..." se minorenne
void buttaFuori(int eta)
{
    if (eta >= 18)
    {
        cout << "cheers! buon divertimento al bar! ";
    }
    else
    {
        cout << "mi dispiace, sei troppo giovane per la birra";
    }
}

// riordina 3 numeri in ordine decrescente
// input: numero a, numero b, numero c
// output: stampa in numeri dati in ordine decrescente
void decrescente(int a, int b, int c)
{
    if (a >= b and a >= c) // a è il più grande
    {
        if (b >= c)
        {
            cout << "l'ordine decrescente è: "<< "\n" << a << "\n" << b << "\n" << c;
        }
        else
        {
            cout << "l'ordine decrescente è: "<< "\n" << a << "\n" << c << "\n" << b;
        }
    }
    else if (b >= a and b >= c) // b è il più grande
    {
        if (a >= c)
        {
            cout << "l'ordine decrescente è: "<< "\n" << b << "\n" << a << "\n" << c;
        }
        else
        {
            cout << "l'ordine decrescente è: "<< "\n" << b << "\n" << c << "\n" << a;
        }
    }
    else if (c >= a and c >= b) // c è il più grande
    {
        if (a >= b)
        {
            cout << "l'ordine decrescente è: "<< "\n" << c << "\n" << a << "\n" << b;
        }
        else
        {
            cout << "l'ordine decrescente è: "<< "\n" << c << "\n" << b << "\n" << a;
        }
    }
}

// stampa un nome dentro un rettangolo
// input: nome
// output: stampa il nome inserito dentro un rettangolo
void stampaNome(string nome)
{
    string riga = "";

    int lunghezza = nome.length();

    riga += "+-------";

    for (int i = 0; i < lunghezza; i++)
    {
        riga += "-";
    }
    riga += "+ \n";

    cout << riga;

    cout << "|    " << nome << "   |\n";

    cout << riga;
}

// mi dice se il numero b è compreso tra a e b
// input: numero a, numero b, numero c
// output: ritorna true(1) o false(0)
bool isBetween(int a, int b, int c)
{
    if ((a <= b and b <= c) or (b <= a and b >= c))
    {
        return true;
    }
    else
    {
        return false;
    }
}

// risolve una equazione di secondo grado
// input: numero a, numero b, numero c
// output: stampa il risultato dell'equazione
void equazione(int a, int b, int c)
{
    double delta = ((b * b) - 4 * (a * c));

    if (delta > 0)
    {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "x1 =" << x1 << "\n"
             << "x2 =" << x2 << "\n";
    }
    else if (delta < 0)
    {
        cout << "l'equazione non è risolvibile";
    }
    else
    {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        cout << "x1 , x2" << x1;
    }
}

// mi dice se l'anno è bisestile
// input: anno
// output: ritorna true(1) o false(0)
bool bisestile(int anno)
{
    if ((anno % 4 == 0 && anno % 100 != 0) || anno % 400 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// stampa la tabellina del 10 di un numero n
// input: numero n
// output: stampa la tabellina
void stampaTabelline(int n)
{
    for (int i = 0; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << n * i << "\n";
    }
}

// stampa la tabellina di un numero n fino ad un valore m
// input: numero n, numero m
// output: stampa la tabellina
void stampaTabelline(int n, int m)
{
    for (int i = 0; i <= m; i++)
    {
        cout << n << " x " << i << " = " << n * i << "\n";
    }
}

// stampa i numeri pari compresi tra 0 e un numero "quanti"
// input: numero "quanti"
// output: stampa i numeri pari
void stampaPari(int quanti)
{
    for (int i = 0; i <= quanti; i++)
        if (i % 2 == 0)
        {
            cout << i << "\n";
        }
}

int main()
{
    cout << piuGrande(14, 19) << "\n";

    cout << "------------------------------ \n";

    cout << isEven(23) << "\n";

    cout << "------------------------------ \n";

    cout << costoTotale(100, 5) << "\n";

    cout << "------------------------------ \n";

    buttaFuori(19); cout << "\n";

    cout << "------------------------------ \n";

    decrescente(1, 2, 3); cout << "\n";

    cout << "------------------------------ \n";

    stampaNome("jacopo"); cout << "\n";

    cout << "------------------------------ \n";

    cout << isBetween(1, 2, 3) << "\n";

    cout << "------------------------------ \n";

    equazione(1, 5, 4); cout << "\n";

    cout << "------------------------------ \n";

    cout << bisestile(1900) << "\n"; 

    cout << "------------------------------ \n";

    stampaTabelline(7); cout << "\n";

    cout << "------------------------------ \n";

    stampaTabelline(2, 12); cout << "\n";

    cout << "------------------------------ \n";

    stampaPari(20); cout << "\n";
}
