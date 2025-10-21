/*
NAME : Jabali Kayago 
Reg : PA106\G\28768\25
DESCRIPTION : A PROGRAM THAT TRANFERS TEMPRETURE FROM DEGREES TO FAHRENHEIT 

*/
#include<stdio.h>

int main()
{
float fahrenheit;
float degree;

printf("Enter the temperature in fahrenheit :");
scanf("%f", &fahrenheit);

degree = ( fahrenheit - 32 ) * 5/9 ;

printf("\n Your temperature in degree is\n ");
printf("%f",degree);


return 0 ;
}