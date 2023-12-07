#include <stdio.h>      

int main() {
   float days_late=0;

    printf("Please enter the number of days late when returning the CD: ");
    scanf("%f", &days_late);
    
	if (days_late <= 2) {
        // If the days late is less than 2 days, the fine is 100.00.
        printf("Your fine is 100.00");
    } else if (days_late > 2 && days_late <= 4) {
        // If the days late is 3 to 4 days, the fine is 150.00.
        printf("Your fine is 150.00");
    } else if (days_late > 4 && days_late <= 6) {
        // If the days late is 5 to 6 days, the fine is 200.00.
        printf("Your fine is 200.00");
    } else  {
    	// // If the days late is more than 6 days, the fine is 250.00.
        printf("Your fine is 250.00");
    }

return 0;
}