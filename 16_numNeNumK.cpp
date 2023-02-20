/*scrivere un programma che riceva in ingresso
in numero positivo N e determini il massimo intero K tale
che la somma dei primi K interi sia minore o uguale a N
es. N=20  K=5 (1+2+3+4+5=15) ok (1+2+3+4+5+6=21) nd*/

#include <iostream>
using namespace std;

int maxKappa(int n)
{
    int k = 1;
    int somma = 1;
    while (somma <= n)
    {
        k++;
        somma += k;
    }
    return k - 1;
}

int maxKappaFor(int n)
{
    int somma = 1;
    int k;

    for(k = 1; somma <= n; k++)
    {
        somma += k;
    }
    return k - 1;
}

int main()
{
    cout << maxKappa(20);

    cout << maxKappaFor(20);        

    return 0;
}