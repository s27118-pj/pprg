#include <iostream>
using namespace std;

int a, b, c, m;

int main()
{
    cout << "podaj 3 liczby: \n";
    cin >> a >> b >> c;
    
    m=a;
    if (b>m) m=b;
    if (c>m) m=c;
    
    cout << "najwieksza liczba to:" << m;
    return (0);
}