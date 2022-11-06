#include <iostream>
using namespace std;

int silnia(int a);
int dwumian(int wiersz1, int kolumna);
int main()
{
    int wiersz1;
    cout << "Podaj liczbe wierszy aby stworzyc trojkat Pascala: ";
    cin >> wiersz1;
    for (int i = 0; i < wiersz1; i++) {
        for (int x = wiersz1 - i; x > 0; x--) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << dwumian(i, j) << "  ";
        }
        cout << endl;
    }
}
int dwumian(int wiersz1, int kolumna) {
    return (silnia(wiersz1) / (silnia(kolumna) * silnia(wiersz1 - kolumna)));
}
int silnia(int a) {
    int rezult = 1;
    for (int i = a; i > 0; i--) {
    rezult = rezult * i;
    }

    return rezult;
}