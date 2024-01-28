#ifndef TIME_H
#define TIME_H

#include <iostream>

using namespace std;

class Time 
{
public:
	Time();
	Time(int hours, int minutes, int seconds);

	~Time();

	void tick();

	friend ostream& operator<<(ostream& os, const Time& time);
	friend istream& operator>>(istream& is, Time& time);

	Time& operator++();
	Time operator++(int);
	Time& operator--();
	Time operator--(int);
	bool operator!=(const Time& time) const;
	bool operator==(const Time& time) const;
	bool operator>(const Time& time) const;
	bool operator<(const Time& time) const;

private:
	int hours_;
	int minutes_;
	int seconds_;
};

#endif 
