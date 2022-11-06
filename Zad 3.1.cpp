#include <iostream>
using namespace std;

int main()
{
    float x, y;
    cout << "Podaj 2 liczby: " << endl;
    cin >> x;
    cin >> y;

    printf("Suma wynosi %.2f", x + y);
    cout << endl;
    printf("Roznica wynosi %.2f", x - y);
    cout << endl;
    printf("Iloczyn wynosi %.2f", x * y);
    cout << endl;
    printf("Iloraz wynosi %.2f", x / y);
    cout << endl;
    return 0;
}