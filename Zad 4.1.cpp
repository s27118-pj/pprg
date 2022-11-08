#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int liczba, rozmiar_tablicy;
	cout << "Rozmiar tablicy: ";
	cin >> rozmiar_tablicy;
	vector <int> tablica;
	cout << "Elementy tablicy: " ;

	for (int x = 0; x < rozmiar_tablicy; x++) {
		cin >> liczba;
		tablica.push_back(liczba);
	}
	for (int x = 0; x < rozmiar_tablicy; x++) {
		if (x<rozmiar_tablicy-1 && tablica[x] > tablica[x + 1]) {
			liczba = tablica[x];
			tablica[x] = tablica[x + 1];
			tablica[x + 1] = liczba;
			x = -1;
		}
	}
	cout << "Najwiekszy element tablicy wynosi: " << tablica[tablica.size()-1];
	return 0;
}