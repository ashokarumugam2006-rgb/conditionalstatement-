#include <stdio.h>

#define TOTAL_SEATS 50

int main() {
    int seats[TOTAL_SEATS];
    int choice, seatNumber;

    // Initialize all seats as Available (1)
    for(int i = 0; i < TOTAL_SEATS; i++) {
        seats[i] = 1;
    }

    do {
        printf("\n--- Seat Booking System ---\n");
        printf("1. View Seat Status\n");
        printf("2. Reserve Seat\n");
        printf("3. Occupy Seat\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("\nSeat Status:\n");
                for(int i = 0; i < TOTAL_SEATS; i++) {
                    printf("Seat %d: ", i+1);
                    if(seats[i] == 1)
                        printf("Available\n");
                    else if(seats[i] == 2)
                        printf("Reserved\n");
                    else if(seats[i] == 3)
                        printf("Occupied\n");
                }
                break;

            case 2:
                printf("Enter seat number to reserve (1-50): ");
                scanf("%d", &seatNumber);

                if(seatNumber >= 1 && seatNumber <= 50) {
                    if(seats[seatNumber-1] == 1) {
                        seats[seatNumber-1] = 2;
                        printf("Seat %d Reserved Successfully!\n", seatNumber);
                    } else {
                        printf("Seat not available for reservation.\n");
                    }
                } else {
                    printf("Invalid seat number!\n");
                }
                break;

            case 3:
                printf("Enter seat number to occupy (1-50): ");
                scanf("%d", &seatNumber);

                if(seatNumber >= 1 && seatNumber <= 50) {
                    if(seats[seatNumber-1] == 2) {
                        seats[seatNumber-1] = 3;
                        printf("Seat %d is now Occupied!\n", seatNumber);
                    } else {
                        printf("Seat must be Reserved before Occupying.\n");
                    }
                } else {
                    printf("Invalid seat number!\n");
                }
                break;

            case 4:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 4);

    return 0;
}
