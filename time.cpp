#include "time.h"

Time::Time() 
{
    hours_ = 0;
    minutes_ = 0;
    seconds_ = 0;
}

Time::Time(int hours, int minutes, int seconds) 
{
    hours_ = hours;
    minutes_ = minutes;
    seconds_ = seconds;
}

Time::~Time() {}

void Time::tick() 
{
    ++seconds_;
    if (seconds_ == 60)
    {
        seconds_ = 0;
        ++minutes_;
    }
    if (minutes_ == 60) 
    {
        minutes_ = 0;
        ++hours_;
    }
}

ostream& operator<<(ostream& os, const Time& time) 
{
    os << time.hours_ << ":" << time.minutes_ << ":" << time.seconds_;
    return os;
}

istream& operator>>(istream& is, Time& time)
{
    is >> time.hours_ >> time.minutes_ >> time.seconds_;
    return is;
}

Time& Time::operator++() 
{
    tick();
    return *this;
}

Time Time::operator++(int) 
{
    Time old_time = *this;
    tick();
    return old_time;
}

Time& Time::operator--() 
{
    if (seconds_ == 0) 
    {
        seconds_ = 59;
        if (minutes_ == 0) 
        {
            minutes_ = 59;
            if (hours_ == 0) 
            {
                hours_ = 23;
            }
            else 
            {
                --hours_;
            }
        }
        else 
        {
            --minutes_;
        }
    }
    else 
    {
        --seconds_;
    }
    return *this;
}

Time Time::operator--(int) 
{
    Time old_time = *this;
    --*this;
    return old_time;
}

bool Time::operator!=(const Time& time) const 
{
    return hours_ != time.hours_ || minutes_ != time.minutes_ || seconds_ != time.seconds_;
}

bool Time::operator==(const Time& time) const 
{
    return hours_ == time.hours_ && minutes_ == time.minutes_ && seconds_ == time.seconds_;
}

bool Time::operator>(const Time& time) const 
{
    if (hours_ > time.hours_) 
    {
        return true;
    }
    else if (hours_ == time.hours_) 
    {
        if (minutes_ > time.minutes_) 
        {
            return true;
        }
        else if (minutes_ == time.minutes_) 
        {
            return seconds_ > time.seconds_;
        }
    }
    return false;
}

bool Time::operator<(const Time& time) const 
{
    return !(*this > time);
}
