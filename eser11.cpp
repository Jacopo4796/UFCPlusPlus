#include <iostream>
#include <string>
using namespace std;

int main()
{
   int totale = 0;
   for (int i = 1; i <= 100; i++)
   {
      totale = totale + i;
   }
   cout << "la somma dei numeri interi  da 1 a 100 è " << totale << "\n";
   return 0;
}