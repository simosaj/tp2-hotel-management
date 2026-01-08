#ifndef DATE_H
#define DATE_H

class Date {
public:
	Date(int month = 1, int day = 1, int year = 1);
	int month();
	int day();
	int year();
private:
	int year_;
	int month_;
	int day_;
	bool isDate(int month, int day, int year);
};
#endif // DATE_H