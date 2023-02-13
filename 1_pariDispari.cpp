#include <iostream>

int main()
{
    int numero;
    std::cout << "inserisci un numero";
    std::cin >> numero;
    int resto = numero % 2;
    if (resto == 0)
    {
        std::cout << "il numero è pari \n";
    }
    else
    {
        std::cout << "il numero è dispari \n";
    }
}