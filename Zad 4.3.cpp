#include <iostream>
#include <iomanip> 

using namespace std;
int main()
{
	int tablica_liczb[10][10];
	for (int x = 0; x < 10; x++) {
		for (int y = 0; y < 10; y++) {
			if (x == 0) {
				tablica_liczb[x][y] = y; //1-9
			}
			else if (x == 1) {
				tablica_liczb[x][y] = y * 2; //suma liczb
			}
			else if (x == 2) {
				tablica_liczb[x][y] = y * y; //kwadraty tych liczb
			}
			else if (x == 3) {
				tablica_liczb[x][y] = x + y +2; //suma nr wiersza i nr kolumny
			}
			else if (x == 4) {
				tablica_liczb[x][y] = (y + 1) - (x + 1); //wynik roznicy nr wiersza i nr kolumny
			}
			else {
				tablica_liczb[x][y] = 0; //pozostale 0
			}

		}
	}
	for (int x = 0; x < 10; x++) {
		for (int y = 0; y < 10; y++) {
			cout << setw(2);
			cout << tablica_liczb[y][x] << " ";
		}
		cout << endl;
	}
	return 0;
}