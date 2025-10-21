/*
NAME :JABALI MAKORI KAYAGO 
REG : PA106/G/28768/25
DESCRIPTION : A PROGRAM THAT CALCULATES THE AMOUNT OF FARE
A PASSENGER IS TO BE CHARGED BY MULTIPLYING THE KILOMETRES TRAVELED BY 50
*/

#include<stdio.h>
int main()
{
//declaring the variables
int fare;
int kilometers;

//prompts the user to input the distance they traveled
printf("Enter the distance to be travelled in kilometres :");
scanf("%d",&kilometers); 

//main calculation to obtain fare
fare = kilometers* 50 ;


//displays the fare to the user
printf("\nYOUR FARE IS KSH:");
printf("%d",fare);

return 0;
}