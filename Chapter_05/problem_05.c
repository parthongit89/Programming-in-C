#include <stdio.h>
#include <math.h>

// Function declarations returning float
float a_s(float side);
float a_c(float radius);
float a_r(float length, float breadth);

int main() {
    char d;
    float n, b;

    printf("Enter type of area to calculate (s for square, c for circle, r for rectangle): ");
    scanf(" %c", &d); // Leading space handles any leftover newline
    
    switch (d) {
        case 's':
            printf("Enter the side of square: ");
            scanf("%f", &n);
            printf("Area of square: %.2f\n", a_s(n));
            break;

        case 'c':
            printf("Enter the radius of circle: ");
            scanf("%f", &n);
            printf("Area of circle: %.2f\n", a_c(n));
            break;

        case 'r':
            printf("Enter the rectangle length: ");
            scanf("%f", &n);
            printf("Enter the rectangle breadth: ");
            scanf("%f", &b);
            printf("Area of rectangle: %.2f\n", a_r(n, b));
            break;

        default:
            printf("Invalid input\n");
    }

    return 0;
}

// Function definitions
float a_s(float side) {
    return side * side;
}

float a_c(float radius) {
    return 3.14159f * radius * radius;
}

float a_r(float length, float breadth) {
    return length * breadth;
}

// Run On terminial Ctrl + `
// gcc problem_05.c; .\a.exe (windows)