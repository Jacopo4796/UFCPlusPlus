/*l'utente inserisce un anno ed
il programma verifica se l'anno è bisestile.
un anno è bisestile se è divisibile per 4,
ma non è divisibile per 100, oppure se è
divisibile per 400.*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int anno;
    cout << "inserire anno";
    cin >> anno;
    

    if(anno % 400 == 0 or anno % 4 == 0)
    {
        cout << "l'anno è bisestile";
    }
    else 
    {
        cout << "l'anno non è bisestile";
    }


}
