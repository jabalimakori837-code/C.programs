/*
NAME:JABALI MAKORI
REG:PA106/G/28768/25
DESCRIPTION :A PROGRAM TO DETERMINE THE EXAM ELIGIBILITY OF STUDENTS
*/
#include <stdio.h>
int main()
{
	float attendance_percentage,average_marks;
	
	
//promt the user to enter thier details
printf("enter your attendance percentage: ");
scanf("%f", &attendance_percentage);


 printf("enter your avarage marks :");
scanf("%f",&average_marks);

//determining thier eligibility aand dispaying the outcome

if(attendance_percentage>=75 && average_marks>=40){
	printf("you are eligible to sit for the exam");
}else
{
	printf("you are not eligible to sit for the exam");
}
	return 0;
}