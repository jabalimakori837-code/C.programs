/*
NAME:JABALI KAYAGO
REG:PA106/G/28768/25
DESCRIPTION :A PROGRAM THAT PROMPTS USER TO ENTER THIER STARTING ACCOUNTS BALANCE
IT THEN PROMPTS THEM FOR THE AMOUNT THEY WANT TO WITHDRAW UNTIL THERE IS NO MORE LEFT
*/

#include <stdio.h>

int main() {
    float balance;
    float withdrawal_amount;

    // Prompt user for the starting account balance
    printf(" Enter your starting account balance:");
    if (scanf("%f", &balance) != 1 || balance <= 0) {
        printf("must be greater than 0\n");
        return 1;
    }
    
    printf("\nStarting account Balance: $%.2f\n", balance);

    // The while loop continues as long as the balance is greater than 0
    while (balance > 0) {
        printf("\nyour Current Balance: ksh%.2f\n", balance);
        printf("Enter amount to withdraw: ksh");

        // prompts for the withdrawal amount 
        if (scanf("%f", &withdrawal_amount) != 1) {
            printf(" Invalid input\n");
            break; 
        }

        // Check for positive withdrawal amount and sufficient funds
        if (withdrawal_amount > 0 && withdrawal_amount <= balance) {
            // Successful withdrawal
            balance -= withdrawal_amount;
            
            printf(" New Balance: $%.2f \n", balance);

            // Check if the balance is now depleted
            if (balance <= 0) {
                printf("\n NO MONEY LEFT IN YOUR ACCOUNT\n");
                break; 
            }
        } else if (withdrawal_amount <= 0) {
            printf(" Withdrawal amount must be positive.\n");
            break; 
        } else {
            // Insufficient funds
            printf("Insufficient funds for $%.2f.\n", withdrawal_amount);
        }
    }
    
    printf(" Final Balance: $%.2f\n", balance);

    return 0;
}
