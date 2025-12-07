#include <stdio.h>

int main() {
    float length, width;
    
    printf("Enter length of rectangle: ");
    scanf("%f", &length);
    
    printf("Enter width of rectangle: ");
    scanf("%f", &width);
    
    float area = length * width;
    float perimeter = 2 * (length + width);
    
    printf("\nArea of rectangle: %.2f\n", area);
    printf("Perimeter of rectangle: %.2f\n", perimeter);
    
    return 0;
}