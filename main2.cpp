#include "time.h"
#include <string>
#include <Windows.h>

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Time time;
    cout << "������ ��� � ������ HH:MM:SS: ";
    string time_str;
    getline(cin, time_str);
    size_t hours_pos = time_str.find(":");
    size_t minutes_pos = time_str.find(":", hours_pos + 1);
    int hours = stoi(time_str.substr(0, hours_pos));
    int minutes = stoi(time_str.substr(hours_pos + 1, minutes_pos - hours_pos - 1));
    int seconds = stoi(time_str.substr(minutes_pos + 1));
    if (hours < 0 || hours > 23) 
    {
        throw invalid_argument("��� ������� ���� � ����� �� 0 �� 23");
    }
    if (minutes < 0 || minutes > 59) 
    {
        throw invalid_argument("��� ������� ���� � ����� �� 0 �� 59");
    }
    if (seconds < 0 || seconds > 59) 
    {
        throw invalid_argument("��� ������� ���� � ����� �� 0 �� 59");
    }
    time = Time(hours, minutes, seconds);
    cout << "���: " << time << endl;
    time++;
    cout << "��� ���� ���������: " << time << endl;
    return 0;
}
