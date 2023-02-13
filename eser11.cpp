#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int n = 100;
    int somma = 0;
    int a;
     
     for(i = 0; i < n; i += 1)
     {
        cin >> a;
        cout << somma + a;
     }
}