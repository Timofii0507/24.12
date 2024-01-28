#ifndef DATE_H
#define DATE_H

#include <iostream>

using namespace std;

class Date 
{
private:
    int day;
    int month;
    int year;

public:
    Date();
    Date(int day, int month, int year);

    void incrementDay();

    Date operator++();     
    Date operator--();     
    bool operator!=(const Date& other) const;
    bool operator==(const Date& other) const;
    bool operator>(const Date& other) const;
    bool operator<(const Date& other) const;
    Date operator+=(int days);
    Date operator-=(int days);
    Date operator()();    

    friend istream& operator>>(istream& in, Date& date);
    friend ostream& operator<<(ostream& out, const Date& date);
};

#endif 
