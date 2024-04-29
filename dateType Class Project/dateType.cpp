#include "dateType.h"

// Default constructor
dateType::dateType()
{
    year = 1900;
    month = 1;
    day = 1;
}

// Constructor with parameters
dateType::dateType(int year, int month, int day)
{
    setYear(year);
    setMonth(month);
    setDay(day);
}

// Setters
void dateType::setYear(int year)
{
    this->year = year;
}

void dateType::setMonth(int month)
{
    if (month >= 1 && month <= 12)
    {
        this->month = month;
    }
    else
    {
        throw std::invalid_argument("Invalid month value");
    }
}

void dateType::setDay(int day)
{
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        if (day >= 1 && day <= 31)
        {
            this->day = day;
        }
        else
        {
            throw std::invalid_argument("Invalid day value for this month");
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        if (day >= 1 && day <= 30)
        {
            this->day = day;
        }
        else
        {
            throw std::invalid_argument("Invalid day value for this month");
        }
    }
    else if (month == 2)
    {
        if (isLeapYear() && day >= 1 && day <= 29)
        {
            this->day = day;
        }
        else if (!isLeapYear() && day >= 1 && day <= 28)
        {
            this->day = day;
        }
        else
        {
            throw std::invalid_argument("Invalid day value for this month");
        }
    }
}

// Getters
int dateType::getYear() const
{
    return year;
}

int dateType::getMonth() const
{
    return month;
}

int dateType::getDay() const
{
    return day;
}

// Check if a year is a leap year
bool dateType::isLeapYear() const
{
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return true;
        }
    }
    else
    {
        return false;
    }
}

// Return the number of days in a month
int dateType::daysInMonth() const
{
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        return 31;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        return 30;
    }
    else if (month == 2)
    {
        if (isLeapYear())
        {
            return 29;
        }
        else
        {
            return 28;
        }
    }
    else
    {
        throw std::invalid_argument("Invalid month value");
    }
}

// Print the date in the format mm-dd-yyyy
void dateType::print() const
{
    std::cout << month << "-" << day << "-" << year << std::endl;
}

// Return the number of days passed since the beginning of the year
int dateType::daysPassed() const
{
    int days = 0;
    for (int i = 1; i < month; i++)
