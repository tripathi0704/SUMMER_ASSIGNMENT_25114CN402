#include <stdio.h>

struct Ticket
{
    int ticketId;
    char passengerName[50];
    char source[50];
    char destination[50];
    int seats;
};

int main()
{
    struct Ticket ticket;
    int choice;

    printf("Enter ticket ID: ");
    scanf("%d", &ticket.ticketId);
    printf("Enter passenger name: ");
    scanf(" %49[^\n]", ticket.passengerName);
    printf("Enter source: ");
    scanf(" %49[^\n]", ticket.source);
    printf("Enter destination: ");
    scanf(" %49[^\n]", ticket.destination);
    printf("Enter number of seats: ");
    scanf("%d", &ticket.seats);

    do
    {
        printf("\n=== Ticket Booking System ===\n");
        printf("1. Display Ticket\n");
        printf("2. Book More Seats\n");
        printf("3. Cancel Seats\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\nTicket ID: %d\nPassenger Name: %s\nSource: %s\nDestination: %s\nSeats: %d\n", ticket.ticketId, ticket.passengerName, ticket.source, ticket.destination, ticket.seats);
                break;
            case 2:
            {
                int moreSeats;
                printf("Enter seats to book: ");
                scanf("%d", &moreSeats);
                if (moreSeats > 0)
                {
                    ticket.seats += moreSeats;
                    printf("Seats booked successfully.\n");
                }
                else
                {
                    printf("Invalid seats.\n");
                }
                break;
            }
            case 3:
            {
                int cancelSeats;
                printf("Enter seats to cancel: ");
                scanf("%d", &cancelSeats);
                if (cancelSeats > 0 && cancelSeats <= ticket.seats)
                {
                    ticket.seats -= cancelSeats;
                    printf("Seats canceled successfully.\n");
                }
                else
                {
                    printf("Invalid seats.\n");
                }
                break;
            }
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    }
    while (choice != 4);

    return 0;
}