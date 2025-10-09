/* 
NAME:JABALI MAKORI 
REG:PA106/G/28768/25
DESCRIPTION:A PROGRAM THAT WRITES 100 TO 50 USING FOR LOOP EACH NUMBER IN ITS OWN LINE
*/

#include <stdio.h>
int main(void)
{
    //the variable declaring 
    int i; 

    // Loop starts at 100, continues as long as i >= 50 and decreases by one
    for (i = 100; i >= 50; i--)
    {
        // Print the current value of i in a new line
        printf("%d\n", i);
    }

    return (0);
}
