/*
    Programm: TagDesJahres
    Author: Erik Meyer
    Datum: 28.1.2020
*/
#include <stdio.h>
#include <stdlib.h>
#include "timelib.h"

int main()
{
    int day,month,year = 0;

    input_date(&day,&month,&year);

    int DayInYear = day_of_the_year(day,month,year);
    printf("\nTag im Jahr: %d \n", DayInYear);

    return 0;
}
