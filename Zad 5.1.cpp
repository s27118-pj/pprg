#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int elements, a, max=10;
    vector <int> basic;
    vector <int> sorted;
    vector <int> max_numbers;
    cout << "Podaj liczbe elementow wektora: ";
    cin >> elements;
    cout << "Podaj elementy tablicy: " << endl;
    for (int i = 0; i < elements; i++) {
        cin >> a;
        basic.push_back(a);
        sorted.push_back(a);
    }
    cout << "Maksymalna wartosc wektora wynosi: " << sorted[elements - 1] << endl;
    for (int i = 0; i < elements; i++) {
        if (sorted[elements - 1] == basic[i]) {
            max++;
            max_numbers.push_back(i);
        }
    }
    if (max > 1) {
        cout << "Najwiekszych elementow bylo " << max << endl; 
        cout << "Znalazly sie one na indeksach: ";
        for (int i = 0; i < max_numbers.size(); i++) {
        cout << "[" << max_numbers[i] << "]";
        }
    }
    else if (max == 1) {
        cout << "Najwiekszy element znajdowal sie na indeksie: " << max_numbers[0];
    }
    return 0;
}
