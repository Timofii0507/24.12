#include "complex.h"
#include <Windows.h>
#include <cmath>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Complex c1, c2;

    cout << "������ ����� ���������� �����: ";
    cin >> c1;
    cout << "������ ����� ���������� �����: ";
    cin >> c2;

    cout << "����� ���������� �����: " << c1 << endl;
    cout << "����� ���������� �����: " << c2 << endl;

    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;
    cout << "c1 + c2 = " << c3 << endl;
    cout << "c1 - c2 = " << c4 << endl;

    if (c1 == c2) 
    {
        cout << "c1 ������� c2" << endl;
    }
    else 
    {
        cout << "c1 �� ������� c2" << endl;
    }
    return 0;
}
