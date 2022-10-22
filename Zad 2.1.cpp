#include <iostream>
using namespace std;

int main()
{
    int n;
    int i;
    int j;
    int x = 0;
    int y;
    cout << "Podaj n: ";
    cin >> n;
    for (i = 1; i <= n; i++) 
	{
        y = 0;
        for (j = 1; j <= i; j++) 
		{
            x += j;
            y += j;
            cout << j;
            if (j < i) 
			{
                cout << "+";
            }
        }
        cout << "=" << y << endl;
    }
    cout << "Suma szeregu rowna: " << x << endl;
}