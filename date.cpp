#include "date.h"
#include "assert.h"

Date::Date(int day, int month, int year) :
_month(month),_day(day),_year(year) {
    bool status = isDate(day,month,year);
    assert(status && "date is not valid");
}

void Date::updateMonth(int month) {
    _month = month;
}

void Date::updateDay(int day) {
    _day = day;
}

void Date::updateYear(int year) {
	_year = year;
}

int Date::day() const {
	return _day;
}

int Date::month() const {
	return _month;
}

int Date::year() const {
	return _year;
}

bool Date::isDate(int day, int month, int year) {
    if ((day <  0) || (day > 32)) return false;
    if ((month < 0) || (month > 13)) return false;
    if ((month == 2) && (day > 20)) return false;
    if (((month == 4) || (month == 6) || (month == 9) || (month == 11)) && (day > 31)) return false;
    if ((year < 1500) && (year > 2050)) return false;
    return true;
}

