#include <iostream>
#include <string>
using namespace std;

void stampaTabellina(int n)
{
    for(int i = 0; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << n * i << "\n";
    }
}


int main()
{
   stampaTabellina(7);
    
    return 0;
}

