#include <stdio.h>

int main(){

int seconds,hours,minutes,number;


scanf("%d",&number);

hours = number/3600;
minutes = (number - hours*3600)/60;
seconds = (number - hours*3600 - minutes*60);

 printf("%d:%d:%d\n", hours, minutes, seconds);

return 0;

}