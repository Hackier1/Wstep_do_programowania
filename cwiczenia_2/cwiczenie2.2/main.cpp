#include <iostream>

using namespace std;

int main()
{
    int liczba1, liczba2;
    cout << "Podaj 2 rozne liczby calkowite: " << endl;
    cin >> liczba1 >> liczba2;
    cout << "wieksza: ";
    if(liczba1 > liczba2)
        cout << liczba1;
    else
        cout << liczba2;

    return 0;
}
