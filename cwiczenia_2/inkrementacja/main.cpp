#include <iostream>

using namespace std;

int main()
{
    int liczba1, liczba2, wynik;
    cout << "podaj 2 liczby: " << endl;
    cin >> liczba1 >> liczba2;
    cout << "podaj sume podanych liczb: "<<endl;
    cin >> wynik;
    if(wynik==liczba1+liczba2)
        cout<<"ok";
    else
        cout<<"blad";


    return 0;
}
