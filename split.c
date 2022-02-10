#include <stdio.h>

int main() {
    int ndays,year,month,week,days;
    printf("Enter no. of days:");
    scanf("%d",&ndays);
    year=ndays/365;
    month=(ndays-365*year)/30;
    week=((ndays%365)-month*30)/7;
    days=((ndays%365)-month*30)-week*7;
    printf("\n%d year \n%d month \n%d week \n%ddays",year,month,week,days);
   
    return 0;
}