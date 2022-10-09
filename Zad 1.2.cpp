#include <iostream>
using namespace std;
int main()
{
    int x;
    while( 1 )
    {
        cout << "podaj x: ";
        cin >> x;
       
        if( x > 0 ) cout << "dodatnia";
        else if( x < 0 ) cout << "ujemna";
        else if( x == 0 ) cout << "liczba jest zerem";
        else cout << x;
        return (0);
    }
   
}