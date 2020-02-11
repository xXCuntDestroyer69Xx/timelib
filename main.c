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
