#ifndef DATE_TYPE_H
#define DATE_TYPE_H

class dateType
{
private:
    int year;
    int month;
    int day;

public:
    // Default constructor
    dateType();

    // Constructor with parameters
    dateType(int year, int month, int day);

    // Setters
    void setYear(int year);
    void setMonth(int month);
    void setDay(int day);

    // Getters
    int getYear() const;
    int getMonth() const;
    int getDay() const;

    // Check if a year is a leap year
    bool isLeapYear() const;

    // Return the number of days in a month
    int daysInMonth() const;

    // Print the date in the format mm-dd-yyyy
    void print() const;

    // Return the number of days passed since the beginning of the year
    int daysPassed() const;

    // Return the number of days remaining in the year
    int daysRemaining() const;

    // Set the date to a future date using the number of days provided as input
    void setFutureDate(int days);
};

#endif#pragma once
