#include <iostream>
#include "dateType.h"

int main()
{
    dateType date1;
    date1.print(); // Should print 01-01-1900

    dateType date2(2022, 12, 25);
    date2.print(); // Should print 12-25-2022

    date2.setYear(2023);
    date2.setMonth(1);
    date2.setDay(1);
    date2.print(); // Should print 01-01-2023

    std::cout << "Year: " << date2.getYear() << std::endl; // Should print 2023
    std::cout << "Month: " << date2.getMonth() << std::endl; // Should print 1
    std::cout << "Day: " << date2.getDay() << std::endl; // Should print 1

    std::cout << "Is 2024 a leap year? " << (date2.isLeapYear() ? "Yes" : "No") << std::endl; // Should print Yes
    std::cout << "Is 2023 a leap year? " << (date2.isLeapYear() ? "Yes" : "No") << std::endl; // Should print No

    std::cout << "Number of days in February 2024: " << date2.daysInMonth() << std::endl; // Should print 29
    std::cout << "Number of days in March 2023: " << date2.daysInMonth() << std::endl; // Should print 31

    date2.print(); // Should print 01-01-2023

    date2.setYear(2023);
    date2.setMonth(3);
    date2.setDay(15);
    std::cout << "Number of days passed since the beginning of the year: " << date2.daysPassed() << std::endl; // Should print 74

    std::cout << "Number of days remaining in the year: " << date2.daysRemaining() << std::endl; // Should print 291

    date2.setFutureDate(100);
    date2.print(); // Should print 05-10-2023

    return 0;
}