#include <iostream>
#include <string>
using namespace std;

// 0 1 1 2 3 4 13 21
// es fibonacci (0) ""
// es fibonacci (1) 0
// es fibonacci (2) 0 1 
// es. fibonacci (5) 0 1 1 2 3 

void fibonacci(int quanti)
{
    string risultato = "";

    int a = 0;
    int b = 0;

    if(quanti == 0)
    {
        risultato = "";
    }
    else if(quanti == 1)
    {
        risultato = " 0 "; 
    }
    else if(quanti == 2)
    {
        risultato = "0, 1";
    }
    else
    {   









        int valore;
        int a = 0;
        int b = 1;
        risultato = "0, 1, " ;

        for(int i = 2; i < quanti; i++)
        {
            valore = a + b;
            risultato += to_string(valore) + ", "; 
            a = b;
            b = valore;
        }

    }

    cout << risultato << "\n";

}

void fibonacciWhile(int quanti)
{
   int f0 = 0;
   int f1 = 1;
   int prox_fib; 

   cout << f0 << ", " << f1 << ", ";

   prox_fib = f0 + f1;
   int contatore = 2;
   while (contatore <= quanti)
   {
        cout << prox_fib << ", ";
        f0 = f1;
        f1 = prox_fib;
        prox_fib = f0 + f1;
        contatore++;
   }
}

int main()
{

    fibonacci(5);


    return 0;
}