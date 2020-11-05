#include <iostream>

using namespace std;

int main()
{
    int liczba1, liczba2, liczba3;
    cout << "Podaj trzy rozne liczby calkowite: "<<endl;
    cin >> liczba1 >> liczba2 >> liczba3;
    if(liczba1 > liczba2)
        if(liczba1 > liczba3)
            cout << "Najwieksza liczba jest: " << liczba1 << endl;
        else
            cout << "Najwieksza liczba jest: " << liczba3 << endl;
    else
        if (liczba2 > liczba3)
            cout << "Najwieksza liczba jest: " << liczba2 << endl;
        else
            cout << "Najwieksza liczba jest: " << liczba3 << endl;

    return 0;
}
