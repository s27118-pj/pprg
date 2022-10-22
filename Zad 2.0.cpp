#include <iostream>

using namespace std;

int main()
{
    int liczbagosci;
    int liczbakawalkow;
    int reszta;
    int calosc;
    cout << "Ilosc gosci:";
    cin >> liczbagosci;
    cout << "Ilosc kawalkow pizzy:";
    cin >> liczbakawalkow;
    calosc = liczbakawalkow/liczbagosci;
    reszta = liczbakawalkow%liczbagosci;
    cout<<"Ilosc kawalka pizzy na jednego goscia to: " << calosc << endl;
    return 0;
}
