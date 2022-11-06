#include <iostream>
using namespace std;

int main()
{
    char t;
    int i = 0;
    cout << "Podaj znaki z klawiatury" <<endl;
    while (i < 1) {
        cin >> t;
        if (t == 't') {
            cout << "Podany znak to \"t\"";
            i++;
        }
    }
    return 0;
}