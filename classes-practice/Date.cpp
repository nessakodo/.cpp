#include <string>
#include "Date.h"

    // constructor
    Date::Date(int aYear, int aMonth, int aDay): year{aYear}, month{aMonth}, day{aDay}
    {
    // intentionally left blank
    }

    // Date::Date(int, aYear, int aMonth, int aDay)
    // same as 
    // {
    //     year = aYear
    //     month = aMonth
    //     day = aDay
    // }

    // setters
    void Date::setDay(int aDay)
    {
        day = aDay;
    }
    void Date::setMonth(int aMonth)
    {
        month = aMonth;
    }
    void Date::setYear(int aYear)
    {
        year = aYear;
    }

    void setDate(int aYear, int aMonth, int aDay)
    {
        day = aDay;
        month = aMonth;
        year = aYear;
    }

    // getters
    int Date::getDay()
    {
        return day;
    }
    int Date::getMonth()
    {
        return month;
    }
    int Date::getYear()
    {
        return year;
    }

    std::string Date::getDate()
    {
        return std::to_string(month) + "/" + std::to_string(day) + "/" + std::to_string(year);
    }
    


 