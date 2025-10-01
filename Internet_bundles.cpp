/*
NAME:JABALI MAKORI KAYAGO
REG:PA106/G/28768/25
DESCRIPTION:A PROGRAM THAT DISPLAYS A TABLE OF INTERNET BUNDLES AND THEIR PRICES PROMPTING THE USER
TO EITHER CHOOSE ONE THEN DISPLAYS THE USERS SELECTED BUNDLE AND ITS PRICES
*/
#include <stdio.h>
int main()
{
	int choice;
	 

//the table containing the options for the user
printf("-----------------------------------\n");
printf("|option  | bundles  | cost(kes |) |\n");	
printf("-----------------------------------\n");
printf("| 1      | 100mb    | 50          |\n");
printf("-----------------------------------\n");
printf("| 2      | 500mb    | 200         |\n");
printf("-----------------------------------\n");
printf("| 3      | 1gb      | 350         |\n");
printf("-----------------------------------\n");
printf("| 4);    | 2gb      | 600         |\n");
printf("-----------------------------------\n");

//the user is prompted to enter thier choice
printf("\n enter your choice :");
scanf("%d",& choice );


//the users choice the amount of internet and the price is displayed
switch(choice)
{
case 1 :
	printf("you selected 100mb.cost = 50kes \n");
	break;
case 2:
	printf("you have selected 500mb.cost = 200kes \n");
	break;
case 3:
	printf("you have selected 1gb . cost = 350kes \n");
	break;
case 4:
	printf("you have selected 2gb .cost = 600kes  \n");
	break; 
default:
	break;
}


	return 0;
}