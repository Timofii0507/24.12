#include "complex.h"
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Complex c1, c2;

    cout << "Ââåä³òü ïåðøå êîìïëåêñíå ÷èñëî: ";
    cin >> c1;
    cout << "Ââåä³òü äðóãå êîìïëåêñíå ÷èñëî: ";
    cin >> c2;

    cout << "Ïåðøå êîìïëåêñíå ÷èñëî: " << c1 << endl;
    cout << "Äðóãå êîìïëåêñíå ÷èñëî: " << c2 << endl;

    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;
    cout << "c1 + c2 = " << c3 << endl;
    cout << "c1 - c2 = " << c4 << endl;

    if (c1 == c2) 
    {
        cout << "c1 äîð³âíþº c2" << endl;
    }
    else 
    {
        cout << "c1 íå äîð³âíþº c2" << endl;
    }
    return 0;
}
