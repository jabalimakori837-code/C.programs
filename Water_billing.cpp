/*
NAME:JABALI MAKORI KAYAGO
REG:PA106/G/28768/25
DESCRIPTION:A PROGRAM THAT DETERMINES THE PROMTS THE USER FOR THE AMOUNT OF WATER USED IN UNITS AND DISPLAYS THEIR TOTAL BILLING
*/
#include <stdio.h>
int main()
{
	int unit;
	double total_billing;
	
	//prompts the user to enter the amount of water units they used
	printf("enter the amount of water units consumed :");
	scanf("%d",& unit);
	
	//caculates the amount the user will be billed
	if(unit>=0 && unit<=30){
	total_billing=unit* 20.0 ;
    }else if(unit>=31 && unit<=60)
	{
		total_billing=(30* 20.0)+((unit-30)*25.0);
	}else if(unit> 60)
	{
total_billing=(30*20.0) + (30* 25.0) +((unit - 60)* 30.0);
	}
	
	//displays the amount to be billed and the amount of water units the user consumed
	printf("\n Water unit consumed:%d\n", unit);
	printf("\n total water bill:%f\n",total_billing);
	return 0;
}