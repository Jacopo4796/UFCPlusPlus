/*scrivere un programma che risolva l'equazione di secondo grado
  prendendo in input a, b, c. ax^2+bx+c=0
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double a;
  double b;
  double c;

  cout << "data l'equazione di secondo grado inserire a, b, c.";
  cin >> a;
  cin >> b;
  cin >> c;

  double delta = ((b*b) - 4 * (a * c));
  
  if(delta > 0)
  {
    double x1 = (-b + sqrt(delta)) / (2 * a);
    double x2 = (-b - sqrt(delta)) / (2 * a);
    cout << "x1 =" << x1 << "x2 =" << x2 << "\n";
  }
   else if(delta < 0)
  {
    cout << "l'equazione non è risolvibile";
  }
  else 
  {
    double x1 = (-b + sqrt(delta)) / (2 * a);
    cout << "x1 , x2" << x1 ;
  }

  


  
} 