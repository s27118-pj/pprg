#include <iostream>
using namespace std;

int liczba_podzielna(int n) {
    int ile_liczb = 0;
    for (int i = 0; i <= n; i++) {
        if (i % 5 == 0 && i % 3 != 0) {
            ile_liczb++;
        }
    }
    return ile_liczb;
}
int main()
{
    int n;
    cout << "Podaj n: ";
    cin >> n;
    cout << "Ilosc liczb podzielnych przez 5 (z wylaczeniem liczb podzielnych przez 3) wynosi: " << liczba_podzielna(n);
    return 0;
}