#include <stdio.h>      

int main() {
    // Initialization of the program
	int age, answer;

    // Input for the program
    printf("Please enter your age: ");
	scanf("%d", &age);

    // Checking eligibility using if-else statement
	if (age <= 12) {
        // If the age is less than 12, that means you are a child
        printf("'C'");
    } else if (age >= 13 && age <= 19) {
        // If the age is greater than or equal to 13 and age is less than or equal to 19, you are a teenager
        printf("'T'");
    } else  {
        printf("'A'");
    } 

return 0;
}