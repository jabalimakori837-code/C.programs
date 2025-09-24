/*
name :JABALI MAKORI KAYAGO
REG NO:PA106/G/28768/25
DESCRIPTION: program that prompts the user to enter their  eight units for the semester and then displays thier entry
*/
#include <stdio.h>

int main() {
    char unit1[50], unit2[50], unit3[50], unite4[50], unit5[50], unit6[50], unit7[50], unit8[50];
    
//prompt the user to enter thier units

    printf("Enter the name of your units for  this semester and with thier codes:\n");
    
    printf("unit 1: ");
    scanf("%49s", unit1);
    
    printf("unit 2: ");
    scanf("%49s", unit2);
    
    printf("unit 3: ");
    scanf("%49s", unit3);
    
    printf("unit 4: ");
    scanf("%49s", unite4);
    
    printf("unit 5: ");
    scanf("%49s", unit5);
    
    printf("unit 6: ");
    scanf("%49s", unit6);
    
    printf("unit 7: ");
    scanf("%49s", unit7);
    
    printf("unit 8: ");
    scanf("%49s", unit8);
    
    // display the information  entered by the user
    
    printf("\n--- your units for the semester are ---\n");
    printf("1. %s\n", unit1);
    printf("2. %s\n", unit2);
    printf("3. %s\n", unit3);
    printf("4. %s\n", unite4);
    printf("5. %s\n", unit5);
    printf("6. %s\n", unit6);
    printf("7. %s\n", unit7);
    printf("8. %s\n", unit8);

    return 0;
}
    