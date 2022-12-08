/* Gra Snake, s27118*/
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <time.h> //wartosc odradzania bardziej losowa

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
using namespace std;

bool endGame;
const int width = 20;
const int height = 20;
int x, y;
int foodX, foodY, score;
int tailX[100], tailY[100];
int nTail;
enum eDirecton
{
    STOP = 0,
    LEFT,
    RIGHT,
    UP,
    DOWN
};
eDirecton dir;

void Setup() //ustawienia domyslne gry
{
    endGame = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    score = 0; //wynik na start
    foodX = rand() % width; //random pozycja X dla owoca
    foodY = rand() % height; //random pozycja Y dla owoca
    system("MODE con cols=60 lines=25"); //rozmiar okna przy uruchamianiu programu
}
void sectionObjects() //plansza i waz
{
    system("cls");
    cout << endl;
    cout << " ";
    for (int i = 0; i < width+2; i++)
    cout << "#"; //gora planszy
    cout << endl;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (j == 0)
                cout << " #"; //lewy bok planszy
            if (i == y && j == x)
                cout << "@"; //glowa weza
            else if (i == foodY && j == foodX)
                cout << "X"; //owoc
            else
            {
                bool print = false;
                for (int k = 0; k < nTail; k++)
                {
                    if (tailX[k] == j && tailY[k] == i)
                    {
                        cout << "#"; //cialo weza
                        print = true;
                    }
                }
                if (!print)
                    cout << " ";
            }

            if (j == width - 1)
                cout << "#"; //prawy bok planszy
        }
        cout << endl;
    }
    cout << " ";
    for (int i = 0; i < width+2; i++)
    cout << "#"; //dol planszy
    cout << endl;
    cout << endl;
    cout << " Wynik: " << score << endl;
}
void sectionPhysics() //fizyka poruszania weza, kolizje sciana i cialo, owoc pozycja
{
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;
    for (int i = 1; i < nTail; i++)
    {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }
    switch (dir)
    {
        case LEFT:
            x--;
            break;
        case RIGHT:
            x++;
            break;
        case UP:
            y--;
            break;
        case DOWN:
            y++;
            break;
        default:
            break;
    }
    if (x > width || x < 0 || y > height || y < 0)
      endGame = true;

    for (int i = 0; i < nTail; i++)
        if (tailX[i] == x && tailY[i] == y)
            endGame = true;

    if (x == foodX && y == foodY)
    {
        srand(time(0)); //losowa wartosc poczatkowa na podstawie czasu
        score += 1; //dodanie punkta do wyniku
        foodX = rand() % width; //generowanie nowego owoca kordy X
        foodY = rand() % height; //generowanie nowego owoca kordy Y
        nTail++; //powiekszenie ogona o 1
    }
}
void sectionControl() //sterowanie
{
    if (_kbhit()) //sprawdza, czy w buforze klawiatury znajduj¹ siê dane do odczytania; tak=1(true) nie=0(false) [z biblioteki conio.h]
    {
        switch (_getch()) //funkcja odczytywania znakow [z biblioteki conio.h]
        {
            case KEY_LEFT:
                dir = LEFT;
                break;
            case KEY_RIGHT:
                dir = RIGHT;
                break;
            case KEY_UP:
                dir = UP;
                break;
            case KEY_DOWN:
                dir = DOWN;
                break;
            default:
                break;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); //poprawa wydajnosci (?)

    Setup();
    while (!endGame)
    {
        sectionObjects();
        sectionControl();
        sectionPhysics();
        Sleep(70); //co ile ma odswiezac (ma to wplyw na poruszanie weza; mniejsza wartosc = waz jest szybszy, wieksza wartosc = waz jest wolniejszy)
    }
    system("cls");
    cout << "GAME OVER!" << endl;
    cout << "Uzyskany wynik: " << score << endl;
    Sleep(600);
    cout << "" << endl;
    cout << "Aby zakonczyc nacisnij dowolny klawisz" << endl;
    return 0;
}
