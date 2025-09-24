/*
NAME: JABALI MAKORI KAYAGO
REG NO:PA106/G/28768/25
DESCRIPTION:A PROGRAM THAT CALCULATES VOLUME BY PROMPTING THE USEER TO ENTER THE RADIUS HEIGHT THEN DISPLAYS THE VOLUME
*/
#include <stdio.h>
 
int main() {
    float radius, height, volume; 
    const float PI = 3.141593;
 
 //prompt for user to key in the demension
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter height of cylinder: ");
    scanf("%f", &height); 	

    volume = PI * radius * radius * height;

    printf("The volume of the cylinder is: %.4f\n", volume);
    
    return 0;
}
