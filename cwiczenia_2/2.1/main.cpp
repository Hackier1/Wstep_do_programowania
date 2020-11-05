#include <iostream>

using namespace std;

int main()
{
    int liczba;
    cout << "Podaj liczbe calkowita > 0:" << endl;
    cin >> liczba;
    if (liczba > 0)
        cout << "OK/n";
    else
        cout << "zla liczba!!!\n";
    return 0;
}
