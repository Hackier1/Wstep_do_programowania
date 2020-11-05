#include <iostream>

using namespace std;

int main()
{   int liczba1, liczba2, liczba3, maks;
    cout << "Podaj 3 rozne liczby calkowite: ";
    cin >> liczba1 >> liczba2 >> liczba3;
    if (liczba1 > liczba2)
        maks=liczba1;
    else
        maks=liczba2;
    if (maks>liczba3)
        cout<<maks;
    else
        cout<<liczba3;

    return 0;
}
