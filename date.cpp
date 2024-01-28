#include "date.h"

Date::Date() : day(1), month(1), year(2000) {}

Date::Date(int day, int month, int year) : day(day), month(month), year(year) {}

void Date::incrementDay() 
{
    day++;
}

Date Date::operator++()
{
    incrementDay();
    return *this;
}

Date Date::operator--() 
{
    day--;
    return *this;
}

bool Date::operator!=(const Date& other) const 
{
    return !(day == other.day && month == other.month && year == other.year);
}

bool Date::operator==(const Date& other) const 
{
    return (day == other.day && month == other.month && year == other.year);
}

bool Date::operator>(const Date& other) const 
{
    return false;
}

bool Date::operator<(const Date& other) const 
{
    return false;
}

Date Date::operator+=(int days) 
{
    return *this;
}

Date Date::operator-=(int days)
{
    return *this;
}

Date Date::operator()()
{
    return *this;
}

istream& operator>>(istream& in, Date& date) 
{
    int inputDay, inputMonth, inputYear;

    in >> inputDay >> inputMonth >> inputYear;

    if (inputDay < 1 || inputDay > 31 || inputMonth < 1 || inputMonth > 12) 
    {
        cerr << "Помилка: Невірне введення дати. День повинен бути від 1 до 31, місяць - від 1 до 12." << endl;
        inputDay = 1;
        inputMonth = 1;
        inputYear = 2000;
    }
    date.day = inputDay;
    date.month = inputMonth;
    date.year = inputYear;

    return in;
}

ostream& operator<<(ostream& out, const Date& date) 
{
    out << date.day << '/' << date.month << '/' << date.year;
    return out;
}
