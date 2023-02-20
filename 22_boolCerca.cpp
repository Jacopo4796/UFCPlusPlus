// bool cerca(string parola, char c)
#include <iostream>
#include <string>
using namespace std;

bool cerca(string parola, char carattere)
{
    for (int i = 0; i < parola.length(); i++)
    {
        if (parola[i] == carattere)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    cout << cerca("bubbola", 'e');
}
