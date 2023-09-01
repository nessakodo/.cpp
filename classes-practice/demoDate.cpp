#include <string>
#include <iostream>
#include "Date.h"

int main()
{
    int day;
    int month;
    int year;


    Date aDate = Date(2023, 08, 31);

    std::cout << "The month is: " << aDate.getMonth()<< std::endl;
    std::cout << "The day is: " << aDate.getDay()<< std::endl;
    std::cout << "The year is: " << aDate.getYear()<< std::endl;

    std::cout << "The date is: " << aDate.getDate()<< std::endl;

    std::cout << "Enter a day: ";
    std::cin >> day;

    std::cout << "Enter a month: ";
    std::cin >> month;


    std::cout << "Enter a year: ";
    std::cin >> year;

    aDate.setDate(year, month, day);


    return 0;
}

