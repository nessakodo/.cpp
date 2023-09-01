//  header file for Date CLass
 #include <string>

 class Date
 {
public:
    // constructor
    explicit Date(int aYear, int aMonth, int aDay);

    // setters
    void setDay(int aDay);
    void setMonth(int aMonth);
    void setYear(int aYear);

    coid setDate(int aYear, int aMonth, int aDay);

    // getters
    int getDay();
    int getMonth();
    int getYear();

    std::string getDate();
    

private:
    int day;
    int month;
    int year;

 };