#include <iostream>

using namespace std;

int main()
{
    int liczba;
    cout<<"podaj liczbe z przedzialu od 0 do 10"<<endl;
    cin >> liczba;
    if(liczba<=10 && liczba>=0)
        cout<<"ok"<<endl;
    else
        cout<<"blad";

    return 0;
}
