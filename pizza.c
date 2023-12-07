#include <stdio.h>
#include <math.h>

int main() {
    // Initialization of variables
    float diameter1, diameter2, diameter3, price1, price2, price3, area1, area2, area3, price_per_sq_inch1, price_per_sq_inch2, price_per_sq_inch3;
    
    // Input for pizza diameters
    printf("Enter the diameter of the first pizza: ");
    scanf("%f", &diameter1);

    printf("Enter the diameter of the second pizza: ");
    scanf("%f", &diameter2);

    printf("Enter the diameter of the third pizza: ");
    scanf("%f", &diameter3);

    // Calculate area of the pizzas
    area1 = 3.14 * pow(diameter1 / 2.0, 2);
    area2 = 3.14 * pow(diameter2 / 2.0, 2);
    area3 = 3.14 * pow(diameter3 / 2.0, 2);

    // Input for pizza prices
    printf("Enter the price of the first pizza: ");
    scanf("%f", &price1);

    printf("Enter the price of the second pizza: ");
    scanf("%f", &price2);

    printf("Enter the price of the third pizza: ");
    scanf("%f", &price3);

    // Calculate price per square inch
    price_per_sq_inch1 = price1 / area1;
    price_per_sq_inch2 = price2 / area2;
    price_per_sq_inch3 = price3 / area3;

    // Display the results
    printf("Pizza with %.2f inch diameter costs %.2f pesos per square inch.\n", diameter1, price_per_sq_inch1);
    printf("Pizza with %.2f inch diameter costs %.2f pesos per square inch.\n", diameter2, price_per_sq_inch2);
    printf("Pizza with %.2f inch diameter costs %.2f pesos per square inch.\n", diameter3, price_per_sq_inch3);

    // Determine the least expensive pizza
    if (price_per_sq_inch1 < price_per_sq_inch2 && price_per_sq_inch1 < price_per_sq_inch3) {
        printf("The least expensive pizza has a diameter of %.2f inches.\n", diameter1);
    } else if (price_per_sq_inch2 < price_per_sq_inch1 && price_per_sq_inch2 < price_per_sq_inch3) {
        printf("The least expensive pizza has a diameter of %.2f inches.\n", diameter2);
    } else if (price_per_sq_inch3 < price_per_sq_inch1 && price_per_sq_inch3 < price_per_sq_inch2) {
        printf("The least expensive pizza has a diameter of %.2f inches.\n", diameter3);
    }
    return 0;
}