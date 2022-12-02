class Date {
public:
    Date(int month=1, int day=1, int year=2022);
    int month() const;
    int day() const;
    int year() const;
    void updateMonth(int month);
    void updateDay(int day);
    void updateYear(int year);
	bool isDate(int month, int day, int year);
private:
    int _month;
    int _day;
    int _year;

};



