#include<stdio.h>

int main(){

  int number , year , month, days;

  year = number / 365;

    month = number % 365 / 30;

    days = number % 365 % 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", year, month, days);



   return 0;



}







