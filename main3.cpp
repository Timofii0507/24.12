#include "date.h"
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Date myDate;

    cout << "������ ���� � ������ DD MM YYYY:";
    cin >> myDate;

    cout << "������� ����: " << myDate << endl;

    cout << "��������� ���� �� 1 ����: ";
    ++myDate;
    cout << myDate << endl;

    return 0;
}
