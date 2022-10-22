#include <iostream>
using namespace std;
int main() {
    cout << "Podaj liczbe od 1 do 12: ";
    int liczba;
    cin >> liczba;
    switch(liczba)
    {
        case 1:
             cout << "Styczen \n";
             cout << "Ilosc dni w tym miesiacu (w roku nieprzystepnym) to 31 \n";
             cout << "Pogoda w tym miesiacu jest pochmurna \n";
        break;
        case 2:
             cout << "Luty \n";
             cout << "Ilosc dni w tym miesiacu (w roku nieprzystepnym) to 29 \n";
             cout << "Pogoda w tym miesiacu jest pochmurna \n";
        break;
        case 3:
             cout << "Marzec \n";
             cout << "Ilosc dni w tym miesiacu (w roku nieprzystepnym) to 31 \n";
             cout << "Pogoda w tym miesiacu jest pochmurna \n";
        break;
        case 4:
             cout << "Kwiecien \n";
             cout << "Ilosc dni w tym miesiacu (w roku nieprzystepnym) to 30 \n";
             cout << "Pogoda w tym miesiacu jest sloneczna \n";
        break;
        case 5:
             cout << "Maj \n";
             cout << "Ilosc dni w tym miesiacu (w roku nieprzystepnym) to 31 \n";
             cout << "Pogoda w tym miesiacu jest sloneczna \n";
        break;
        case 6:
             cout << "Czerwiec \n";
             cout << "Ilosc dni w tym miesiacu (w roku nieprzystepnym) to 30 \n";
             cout << "Pogoda w tym miesiacu jest sloneczna \n";
        break;
        case 7:
             cout << "Lipiec \n";
             cout << "Ilosc dni w tym miesiacu (w roku nieprzystepnym) to 31 \n";
             cout << "Pogoda w tym miesiacu jest sloneczna \n";
        break;
        case 8:
             cout << "Sierpien \n";
             cout << "Ilosc dni w tym miesiacu (w roku nieprzystepnym) to 31 \n";
             cout << "Pogoda w tym miesiacu jest sloneczna \n";
        break;
        case 9:
             cout << "Wrzesien \n";
             cout << "Ilosc dni w tym miesiacu (w roku nieprzystepnym) to 30 \n";
             cout << "Pogoda w tym miesiacu jest sloneczna \n";
        break;
        case 10:
             cout << "Pazdziernik \n";
             cout << "Ilosc dni w tym miesiacu (w roku nieprzystepnym) to 31 \n";
             cout << "Pogoda w tym miesiacu jest pochmurna \n";
        break;
        case 11:
             cout << "Listopad \n";
             cout << "Ilosc dni w tym miesiacu (w roku nieprzystepnym) to 30 \n";
             cout << "Pogoda w tym miesiacu jest pochmurna \n";
        break;
        case 12:
             cout << "Grudzien \n";
             cout << "Ilosc dni w tym miesiacu (w roku nieprzystepnym) to 31 \n";
             cout << "Pogoda w tym miesiacu jest pochmurna \n";
        break;
        default:
             cout << "Liczba spoza przedzialu";
        break;
    }
    return 0;
}