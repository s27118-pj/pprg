#include <iostream>
using namespace std;
int main()
{
    int liczba;

    cout << "wprowadz liczbe" << endl;
    cin >> liczba;

    if (liczba==0)
        cout << "liczba zero";
    else if (liczba%2==0)
        cout << "liczba parzysta";
    else
        cout << "liczba nieparzysta";
    return(0);
}