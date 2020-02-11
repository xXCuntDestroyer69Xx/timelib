/*
    Programm: TagDesJahres
    Author: Erik Meyer
    Datum: 28.1.2020
*/
#include <stdio.h>
#include <stdlib.h>

int is_leapyear(int year)
{
    if(year < 1582)
    {
        return -1;
    }

    if (year % 400 == 0)                        //Abfrage ob das Jahr genau durch 400 teilbar ist. Ja = Schaltjahr.
    {
        return 1;
    }
    else
    {
        if (year % 100 == 0)                     //Abfrage ob das Jahr genau durch 100 teilbar ist. Ja = kein Schaltjahr.
        {
            return 0;
        }
        else
        {
            if (year % 4 == 0)                  //Abfrage ob das Jahr genau durch 4 teilbar ist. Ja = Schaltjahr.
            {
                return 1;
            }
            else                                //Durch nicht teilbar daraus folgt : kein Schaltjahr.
            {
                return 0;
            }
        }
    }

    return 0;
}


int get_days_for_month(int month, int year)
{
    int tage[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    if(is_leapyear(year))
    {
        tage[1] = 29;
    }

    if(month < 1 || month > 12)
    {
        return -1;
    }
    else
    {
        return tage[month];
    }
}


int day_of_the_year(int day, int month, int year)
{
    int tage[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    if(is_leapyear(year))
    {
        tage[1] = 29;
    }

    int AnzahlTag = day;
    int i = 0;
    while(i < month - 1)
    {
        AnzahlTag = AnzahlTag + tage[i];
        i++;
    }

    return AnzahlTag;
}



int exists_date(int day, int month, int year)
{
     int monthdays = get_days_for_month(month,year);
    if(monthdays == -1 || year > 2400 || year < 1582 || day < 1 || day > monthdays)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int tag,monat,jahr = 0;

    do
    {
      printf("Tag:");
        scanf("%d", &tag);
        printf("Monat:");
        scanf("%d", &monat);
        printf("Jahr:");
        scanf("%d", &jahr);
    }
    while(!exists_date(tag,monat,jahr));

    int TagImJahr = day_of_the_year(tag,monat,jahr);
    printf("\nTag im Jahr: %d \n", TagImJahr);


    return 0;
}
