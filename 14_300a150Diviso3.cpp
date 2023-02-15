/*scrivere un programma in c++
che calcoli e stampi tutti i
numeri compresi tra 300 e 150,
che sono divisibili per 3.*/

#include <iostream>
#include <string>
using namespace std;

void numDivisibili(int x, int y)
{
    for (int i = x; i <= y; i++)
    {
        if (i % 3 == 0)
        {
            cout << i << "\n";
        }
    }
}

int main()
{
    numDivisibili(150, 300);
    cout << numDivisibili;
}