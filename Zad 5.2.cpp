#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int wys, szer, zm1, zm2;
    int a = 1;
    
    cout << "Podaj jaka wysokosc tablicy: ";
    cin >> wys;
    cout << "Podaj jaka szerokosc tablicy: ";
    cin >> szer;
    int default_value = 0;
    vector<int> v(wys, default_value);
    vector<vector<int>> tablica(szer, v);

    for (int i = 0; i < wys; i++) {
        for (int j = 0; j < szer; j++) {
            tablica[j][i] = a;
            a++;
        }
        cout << endl;
    }
    cout << "Podaj jakie elementy tablicy: " << endl;
    for (int i = 0; i < wys; i++) {
        for (int j = 0; j < szer; j++) {
            cin >> tablica[j][i];
        }
    }
    cout << endl;
    for (int i = 0; i < wys; i++) {
        for (int j = 0; j < szer; j++) {
            cout << tablica[j][i] << "  ";
        }
        cout << endl;
    }
    for (int i = 0; i < wys; i++) {
        for (int j = 0; j < szer/2; j++) {
            zm1 = tablica[j][i];
            zm2 = tablica[szer - j - 1][i];
            tablica[j][i] = zm2;
            tablica[szer - j - 1][i] = zm1;
        }
    }
    cout << endl;
    for (int i = 0; i < wys; i++) {
        for (int j = 0; j < szer; j++) {
            cout << tablica[j][i] << "  ";
        }
        cout << endl;
    }
    return 0;
}