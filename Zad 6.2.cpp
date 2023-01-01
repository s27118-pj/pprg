#include <iostream>
using namespace std;

struct student {
    string imie;
    int inf, mat, chem, pol;
};

int main()
{
    struct student list_of_stud[6];
    int lzapytan;

    for (int i = 1; i < 7; i++) {
        cout << "Podaj imie ucznia nr " << i << ": ";
        cin >> list_of_stud[i - 1].imie;
        cout << "Podaj ocene z informatyki: ";
        cin >> list_of_stud[i - 1].inf;
        cout << "Podaj ocene z matematyki: ";
        cin >> list_of_stud[i - 1].mat;
        cout << "Podaj ocene z chemii: ";
        cin >> list_of_stud[i - 1].chem;
        cout << "Podaj ocene z jezyka polskiego: ";
        cin >> list_of_stud[i - 1].pol;
        cout << endl;
    }

    cout << "Podaj liczbe zapytan: ";
    cin >> lzapytan;

    for (int i = 0; i < lzapytan; i++) {
        int a, b;
        cout << "Podaj nr ucznia (od 1 do 6): ";
        cin >> a;
        cout << "Podaj nr przedmiotu (od 1 do 4): ";
        cin >> b;

        switch (b) {
        case 1:
            cout << "Uczen: " << list_of_stud[a - 1].imie << ", ocena z informatyki: " << list_of_stud[a - 1].inf << endl;
            break;
        case 2:
            cout << "Uczen: " << list_of_stud[a - 1].imie << ", ocena z matematyki: " << list_of_stud[a - 1].mat << endl;
            break;
        case 3:
            cout << "Uczen: " << list_of_stud[a - 1].imie << ", ocena z chemii: " << list_of_stud[a - 1].chem << endl;
            break;
        case 4:
            cout << "Uczen: " << list_of_stud[a - 1].imie << ", ocena z jez. polskiego: " << list_of_stud[a - 1].pol << endl;
            break;
        }
    }
    return 0;
}