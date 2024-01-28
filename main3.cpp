#include "date.h"
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Date myDate;

    cout << "¬вед≥ть дату у формат≥ DD MM YYYY:";
    cin >> myDate;

    cout << "¬ведена дата: " << myDate << endl;

    cout << "«б≥льшенн€ дати на 1 день: ";
    ++myDate;
    cout << myDate << endl;

    return 0;
}
