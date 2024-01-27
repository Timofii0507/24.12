#include "complex.h"
#include <Windows.h>
#include <cmath>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Complex c1, c2;

    cout << "Введіть перше комплексне число: ";
    cin >> c1;
    cout << "Введіть друге комплексне число: ";
    cin >> c2;

    cout << "Перше комплексне число: " << c1 << endl;
    cout << "Друге комплексне число: " << c2 << endl;

    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;
    cout << "c1 + c2 = " << c3 << endl;
    cout << "c1 - c2 = " << c4 << endl;

    if (c1 == c2) 
    {
        cout << "c1 дорівнює c2" << endl;
    }
    else 
    {
        cout << "c1 не дорівнює c2" << endl;
    }
    return 0;
}
