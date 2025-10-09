/*
NAME JABALI MAKORI 
REG NO:PA106/G/28768/25
DESCRIPTION: A PROGRAM THAT PROMPTS THE USER TO ENTER THE CORRECT PASSWORD 
AND WHEN THAY DON'T IT PROMPTS THEM AGAIN AND AGAIN UNTIL CORRECT IS ENTERD
*/

#include <stdio.h>

int main() {
    int password;

    // use do-while loop to repeatedly ask for password
    do {
        printf("Enter password: ");
        scanf("%d", &password);

        if (password != 1234) {
            printf("Incorrect password. Try again.\n");
        }

    } while (password != 1234);

    printf("Access Granted\n");

    return 0;
}