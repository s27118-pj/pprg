#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Student {
    string name;
    string surname;
    int index_num;
};

int main()
{
    Student pomoc = { "pomoc", "pomoc", 1 };
    int ilosc_studencikow;

    cout << "Podaj ile studentow dodac: ";
    cin >> ilosc_studencikow;

    vector<Student> studencik;
    cout << "Podaj dane studentow: " << endl;
    for (int i = 0; i < ilosc_studencikow; i++) {
        studencik.push_back(Student());
        cout << "Student nr " << i + 1 << endl;
        cout << "Imie: ";
        cin >> studencik[i].name;
        cout << "Nazwisko: ";
        cin >> studencik[i].surname;
        cout << "Numer indeksu: ";
        cin >> studencik[i].index_num;
        cout << endl;
    }
    cout << "Wektor przed sortowaniem: " << endl;
    cout << endl;
    for (int i = 1; i <= 4; i++) {
        cout << studencik[i - 1].index_num << " " << studencik[i - 1].name << " " << studencik[i - 1].surname << endl;
    }

    cout << endl;

    for (int i = 0; i < studencik.size(); i++) {
        for (int j = i+1; j < studencik.size(); j++) {
            if (studencik[j].index_num < studencik[i].index_num) {
                pomoc = studencik[i];
                studencik[i] = studencik[j];
                studencik[j] = pomoc;
            }
        }
    }

    cout << "Wektor posortowany: " << endl;
    cout << endl;
    for (int i = 1; i <= 4; i++) {
        cout << studencik[i - 1].index_num << " " << studencik[i - 1].name << " " << studencik[i - 1].surname << endl;
    }
    return 0;
}