#ifndef TIMELIB_H_INCLUDED
#define TIMELIB_H_INCLUDED

int is_leapyear(int year);
int get_days_for_month(int month, int year);
int day_of_the_year(int day, int month, int year);
int exists_date(int day, int month, int year);

#endif // TIMELIB_H_INCLUDED

