#include <stdio.h>
#include <math.h>

int main() {
    float number;
    
    printf("Enter a number: ");
    scanf("%f", &number);
    
    float square = number * number;
    float squareRoot = sqrt(number);
    
    printf("\nSquare of %.2f: %.2f\n", number, square);
    
    if (number >= 0) {
        printf("Square root of %.2f: %.2f\n", number, squareRoot);
    } else {
        printf("Square root: Cannot calculate square root of negative number!\n");
    }
    
    return 0;
}