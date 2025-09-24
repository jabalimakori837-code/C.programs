/*
name:Jabali Kayago
adm no: PA106/G/28768/25
DESCRIPTION:program to prompt userto enter their
age
height
ID number
Bank balance
Github.com email account
Then display the users answers to the prompt
*/
#include <stdio.h>
int main()
{
float height;
int id_number;
float bank_balance;
char github_email[100];

//the prompts for the user
printf("Enter your height in meters:");
scanf("%f",&height);

printf("ENTER YOUR ID NUMBER:");
scanf("%d",&id_number);

printf("Enter your bank balance:");
scanf("%f" , &bank_balance);

printf("Enter your github account email:  ");
scanf("%99s",  github_email);

//display  the users answers to the prompts above
printf("\nYOUR DETAILS\n");	
printf("Height:%.2f meters\n",height);
printf("ID number:%d\n",id_number);
printf("Bank balance:%.2f\n",bank_balance);
printf("github email:%s\n",github_email);
	return 0;
}