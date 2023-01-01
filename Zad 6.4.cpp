#include <iostream>
#include <string>
using namespace std;

string konkat(int n, string slowo) {
string a = slowo;
    for (int i = 0; i < n; i++) {
        slowo = slowo + a;
    }
    return slowo;
}
int main()
{
    int n;
    string slowo;
    cout << "Podaj slowo: ";
    getline(cin, slowo);
    
    cout << "Podaj liczbe konkatencji slowa: "; 
    cin >> n;
    cout << konkat(n, slowo);

    return 0;
}