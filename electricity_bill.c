/*
NAME :JABALI MAKORI KAYAGO 
REG : PA106/G/28768/25
DESCRIPTION : A PROGRAM THAT CALCULATES THE TOTAL BILLING THAT A CUSTOMER WILL BE CHARGED
FOR THE GIVEN AMOUNT OF ELECTRICITY CONSUMED 
*/

#include<stdio.h>
int main()
{
//declaring the variable type
float units;
float total_billing;

//prompts the user to enter the amount of electricity they consumed
printf("Enter the amounts of units used  :");
scanf("%f",&units );

//calculate the total_billing using if else if
if(units<=100){
total_billing=units * 10;
}
else if(units<=200){
total_billing = 100 * 10 + (units - 100) * 15 ;

}
else{
total_billing  = 100 * 10 + 100 *15 + (units-200) * 20;

}
//displays the bill to user
printf("your total_billing of electricity is");
printf("%.4f", total_billing);

return 0;
}