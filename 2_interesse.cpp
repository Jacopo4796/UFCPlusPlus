#include <iostream>

int main()
{
    double prezzo;
    int rate;

    std::cout << "inserisci prezzo:";
    std::cin >> prezzo;

    std::cout << "inserisci rate:";
    std::cin >> rate;

    double interesse = prezzo * 0.05;
    double costo_totale = prezzo + interesse;

    std::cout << "costo totale:" << costo_totale << "\n";
}
