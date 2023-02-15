/* scrivi un programma che calcoli
   e stampi la somma dei quadrati
   dei primi 10 numeri naturali */
#include <iostream>
#include <string>
using namespace std;

int somma(int x)
{
   int tot = 0;
   for (int i = 0; i <= x; i++)
   {
      tot += i * i;
   }
   return tot;
}

int main()
{
   int tot = somma(10);
   cout << "la somma dei quadrati dei primi 10 numeri naturali è " << tot;
}