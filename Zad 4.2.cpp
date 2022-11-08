#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int liczba, rozmiar_tablicy;
	cout << "Rozmiar tablicy: ";
	cin >> rozmiar_tablicy;
	vector <int> tablica, elementy_tablicy, liczba_elementow, sortowanie;

	cout << "Elementy tablicy: ";
	for (int x = 0; x < rozmiar_tablicy; x++) {
		cin >> liczba;
		tablica.push_back(liczba);
	}
	liczba = 0;
	for (int x = 0; x < rozmiar_tablicy; x++) {
		if (x<rozmiar_tablicy - 1 && tablica[x] > tablica[x + 1]) {
			liczba = tablica[x];
			tablica[x] = tablica[x + 1];
			tablica[x + 1] = liczba;
			x = -1;
		}
	}
	liczba = 0;
	for (int x = 0; x < rozmiar_tablicy; x++) {
		if (x < tablica.size()-1 && tablica[x] != tablica[x + 1]) {
			elementy_tablicy.push_back(tablica[x]);
		}
	}
	elementy_tablicy.push_back(tablica[tablica.size() - 1]);
	cout << endl;
	for (int x = 0; x < elementy_tablicy.size(); x++) {
		liczba_elementow.push_back(0);
		for (int y = 0; y < tablica.size(); y++) {
			if (elementy_tablicy[x] == tablica[y]) {
				liczba_elementow[x]++;
			}
		}
	}
	for (int x = 0; x < liczba_elementow.size(); x++) {
		sortowanie.push_back(liczba_elementow[x]);
	}
	for (int x = 0; x < sortowanie.size(); x++) {
		if (x<sortowanie.size() - 1 && sortowanie[x] > sortowanie[x + 1]) {
			liczba = sortowanie[x];
			sortowanie[x] = sortowanie[x + 1];
			sortowanie[x + 1] = liczba;
			x = -1;
		}
	}
	liczba = 0;
	for (int x = 0; x < liczba_elementow.size(); x++) {
		if (liczba_elementow[x] == sortowanie[sortowanie.size() - 1]) {
			if (liczba == 0) {
				cout << "Najczesciej wystepujace elementy w tablicy: " << elementy_tablicy[x];
				liczba++;
			}
			else {
				cout << ", " << elementy_tablicy[x];
			}
		}
	}
	return 0;
}