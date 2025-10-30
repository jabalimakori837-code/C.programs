/*
Name: JABALI KAYAGO
Reg No: PA106/G/28768/25
Description:This program uses a 3D array to represent room occupancy across multiple hotel branches.It simulates occupancy data for 3 branches, counts total occupied and vacant room and displays the overall hotel chain occupancy summary.
*/

#include <stdio.h>

int main() {
    int chain[3][5][10];  // 3 branches, 5 floors, 10 rooms each
    int totalOccupied = 0, totalVacant = 0;

    printf("=== MULTIPLE BRANCH OCCUPANCY (3 BRANCHES) ===\n");

    // Input occupancy data for each branch
    for (int branch = 0; branch < 3; branch++) {
        printf("\nBranch %d data (5 floors, 10 rooms each)\n", branch + 1);
        for (int floor = 0; floor < 5; floor++) {
            printf("Enter occupancy for Floor %d (1=occupied, 0=vacant):\n", floor + 1);
            for (int room = 0; room < 10; room++) {
                scanf("%d", &chain[branch][floor][room]);

                // Validation: only allow 0 or 1
                while (chain[branch][floor][room] != 0 && chain[branch][floor][room] != 1) {
                    printf("Invalid input! Please enter 1 (occupied) or 0 (vacant): ");
                    scanf("%d", &chain[branch][floor][room]);
                }
            }
        }
    }

    // Count total occupied and vacant rooms across all branches
    for (int branch = 0; branch < 3; branch++) {
        for (int floor = 0; floor < 5; floor++) {
            for (int room = 0; room < 10; room++) {
                if (chain[branch][floor][room] == 1)
                    totalOccupied++;
                else
                    totalVacant++;
            }
        }
    }

    printf("\n--- Hotel Chain Summary ---\n");
    printf("Total branches: 3\n");
    printf("Total occupied rooms: %d\n", totalOccupied);
    printf("Total vacant rooms: %d\n", totalVacant);

    return 0;
}