/*
NAME:JABALI KAYAGO
ADM NO: PA106/G/28768/25
DESCRIPTION:A PROGRAM THAT DETERMINES IS A PERSON IS ELIGIBLE FOR A LOAN
*/
#include <stdio.h>

int main() {
    int age;
    float annual_income;

    // ask the user for their age
    
    printf("Please enter your age: ");
    scanf("%d", &age);

    // ask the user for their annual income
    
    printf("Please enter your annual income [in KSh]: ");
    scanf("%f", &annual_income);

    // determine if they are eligible for the loan
    
    if (age >= 21 && annual_income >= 21000.000) {
        printf("Congratulations, you qualify for a loan.\n");
    } else {
        printf("Unfortunately, YOU ARE NOT ELIGBLE TO BE GIVEN THE LOAN.\n");
    }

    return 0;
}
