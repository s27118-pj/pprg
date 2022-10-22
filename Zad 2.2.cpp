#include <iostream>
using namespace std;

int main (){
    int a, b;
    cout << "Podaj dlugosc boku a: ";
    cin >> a;
    cout << "Podaj dlugosc boku b: ";
    cin >> b;

    cout << "Wiersz o dlugosci a: \n";
    for(int i=1; i<=a; i++){
        cout << "*";
    }
    cout << "\nKolumna o dlugosci b: \n";
    for (int i = 1; i <= b; i++)
    {
        cout << "*" << endl;
    }
    cout << "\nProstokat o wymiarach a i b: \n";
    for(int i = 1; i <= b; i++)
    {
        for(int j = 1; j <= a; j++)
		{
           cout << "*";
        }
        cout << "\n";
	}
    cout << "\nObwod prostokata o wymiarach a i b: \n";
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            if (i == 1 || i == a || j == 1 || j == b)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
    cout << "\nTrojkat prostokatny rownoramienny z katem prostym w lewym dolnym rogu: \n";
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
        
    }
    cout << "\nTrojkat prostokatny rownoramienny z katem prostym w prawym gornym rogu: \n";
    for (int i = 0; i <= a; i++)
    {
        for (int j = 1; j <= a-i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}