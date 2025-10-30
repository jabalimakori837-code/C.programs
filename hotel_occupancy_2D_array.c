/*
Name: JABALI KAYAGO
Reg No: PA106/G/28768/25
Description:This program uses a 2D array to represent room occupancy for one hotel branch.It calculates and displays the number of occupied and vacant rooms per floor.
*/

#include <stdio.h>

int main() {
    int occupancy[5][10];  // 5 floors, 10 rooms per floor
    int occupied, vacant;

    printf(" ROOM OCCUPANCY (ONE BRANCH) \n");

    // Input occupancy data
    for (int floor = 0; floor < 5; floor++) {
        printf("\nEnter occupancy for Floor %d (1=occupied, 0=vacant):\n", floor + 1);
        for (int room = 0; room < 10; room++) {
            scanf("%d", &occupancy[floor][room]);
        }
    }

    // Count occupied and vacant rooms per floor
    printf("\n Floor Occupancy Summary \n");
    for (int floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;
        for (int room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }
        printf("Floor %d -> Occupied: %d, Vacant: %d\n", floor + 1, occupied, vacant);
    }

    return 0;
}